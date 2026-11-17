/* IL2CPP: Dino.BusSand.App.UI.UIManager$$AnyPopupOpen
bool Dino_BusSand_App_UI_UIManager__AnyPopupOpen (Dino_BusSand_App_UI_UIManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UIManager$$AnyPopupOpen
   bool Dino_BusSand_App_UI_UIManager__AnyPopupOpen (Dino_BusSand_App_UI_UIManager_o* __this, const
   MethodInfo* method); */

uint Dino_BusSand_App_UI_UIManager__AnyPopupOpen_21fef84(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((bRam0000000004f9bc7c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabab8);
    FUN_02132f7c(PTR_DAT_04cabac0);
                    /* try { // try from 022fefbc to 023fefc3 has its CatchHandler @ 022ff094 */
    FUN_02132f7c(PTR_DAT_04cabac8);
    FUN_02132f7c(PTR_DAT_04cabae0);
                    /* try { // try from 022fefd0 to 023feffb has its CatchHandler @ 022ff0e0 */
    bRam0000000004f9bc7c = 1;
  }
  puVar2 = PTR_DAT_04cabac0;
  puVar1 = PTR_DAT_04cabab8;
  uStack_38 = 0;
  uStack_30 = 0;
  lStack_28 = 0;
  if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022ff064 with catch @ 022ff068
                       try { // try from 022ff068 to 023ff117 has its CatchHandler @ 022fee24 */
    FUN_02133224();
  }
                    /* try { // try from 022ff00c to 023ff013 has its CatchHandler @ 022ff0c0 */
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_38,*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_04cabae0);
  do {
    uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                      (&uStack_38,*(undefined8 *)puVar2);
    if ((uVar3 & 1) == 0) break;
                    /* try { // try from 022ff02c to 023ff037 has its CatchHandler @ 022ff0a8 */
    if (lStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 022ff064 to 023ff067 has its CatchHandler @ 022ff068 */
      FUN_02133224();
    }
  } while ((*(char *)(lStack_28 + 0x2c) != '\0') ||
          (*(int *)(lStack_28 + 0x28) != 2
                    /* try { // try from 022ff038 to 023ff04f has its CatchHandler @ 022ff080 */));
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
            (&uStack_38,*(undefined8 *)puVar1);
  return uVar3 & 1;
}

