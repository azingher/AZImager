/*==============================================================================

  Copyright (c) Kitware, Inc.

  See http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Julien Finet, Kitware, Inc.
  and was partially funded by NIH grant 3P41RR013218-12S1

==============================================================================*/

#ifndef __qAZImagerAppMainWindow_h
#define __qAZImagerAppMainWindow_h

// AZImager includes
#include "qAZImagerAppExport.h"
class qAZImagerAppMainWindowPrivate;

// Slicer includes
#include "qSlicerMainWindow.h"

class Q_AZIMAGER_APP_EXPORT qAZImagerAppMainWindow : public qSlicerMainWindow
{
  Q_OBJECT
public:
  typedef qSlicerMainWindow Superclass;

  qAZImagerAppMainWindow(QWidget *parent=0);
  virtual ~qAZImagerAppMainWindow();

public slots:
  void on_HelpAboutAZImagerAppAction_triggered();

protected:
  qAZImagerAppMainWindow(qAZImagerAppMainWindowPrivate* pimpl, QWidget* parent);

private:
  Q_DECLARE_PRIVATE(qAZImagerAppMainWindow);
  Q_DISABLE_COPY(qAZImagerAppMainWindow);
};

#endif
