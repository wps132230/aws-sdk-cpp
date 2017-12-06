﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Filters to use when listing TagOptions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListTagOptionsFilters">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICECATALOG_API ListTagOptionsFilters
  {
  public:
    ListTagOptionsFilters();
    ListTagOptionsFilters(const Aws::Utils::Json::JsonValue& jsonValue);
    ListTagOptionsFilters& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The TagOption key.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The TagOption key.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The TagOption key.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The TagOption key.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The TagOption key.</p>
     */
    inline ListTagOptionsFilters& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The TagOption key.</p>
     */
    inline ListTagOptionsFilters& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The TagOption key.</p>
     */
    inline ListTagOptionsFilters& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The TagOption value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The TagOption value.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The TagOption value.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The TagOption value.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The TagOption value.</p>
     */
    inline ListTagOptionsFilters& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The TagOption value.</p>
     */
    inline ListTagOptionsFilters& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The TagOption value.</p>
     */
    inline ListTagOptionsFilters& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The active state.</p>
     */
    inline bool GetActive() const{ return m_active; }

    /**
     * <p>The active state.</p>
     */
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }

    /**
     * <p>The active state.</p>
     */
    inline ListTagOptionsFilters& WithActive(bool value) { SetActive(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;

    bool m_active;
    bool m_activeHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
