/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$OnAppearanceChanged
void Dino_BusSand_App_UI_PlayerSettingPanel__OnAppearanceChanged (Dino_BusSand_App_UI_PlayerSettingPanel_o* __this, int32_t a, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$OnAppearanceChanged
   void Dino_BusSand_App_UI_PlayerSettingPanel__OnAppearanceChanged
   (Dino_BusSand_App_UI_PlayerSettingPanel_o* __this, int32_t a, const MethodInfo* method); */

void Dino_BusSand_App_UI_PlayerSettingPanel__OnAppearanceChanged_23041c4(long param_1,int param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((bRam0000000004f9c4e4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb7dc8);
    FUN_02132f7c(PTR_DAT_04cb7dd0);
    FUN_02132f7c(PTR_DAT_04cb7dd8);
    FUN_02132f7c(PTR_DAT_04cb7de0);
    FUN_02132f7c(PTR_DAT_04cae570);
    bRam0000000004f9c4e4 = 1;
  }
  uStack_38 = 0;
  uStack_30 = 0;
  lStack_28 = 0;
  if (param_2 == 3) {
    if (*(int *)(*(long *)PTR_DAT_04cae570 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = Dino_BusSand_App_Meta_PlayerIdentity__get_PlayerName_225b990(0);
    if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_38,*(long *)(param_1 + 0x70),*(undefined8 *)PTR_DAT_04cb7de0);
    puVar1 = PTR_DAT_04cb7dd0;
                    /* try { // try from 02404290 to 02504297 has its CatchHandler @ 02404754 */
    while (uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&uStack_38,*(undefined8 *)puVar1), (uVar3 & 1) != 0) {
                    /* try { // try from 024042a0 to 025042bb has its CatchHandler @ 02404768 */
      if (lStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 024042dc to 0250437f has its CatchHandler @ 02403fd8 */
        FUN_02133224();
      }
      Dino_BusSand_App_UI_CommonNamePlateView__SetTexts_22d0430
                (*(undefined8 *)(lStack_28 + 0x40),uVar2,0);
    }
                    /* try { // try from 024042bc to 025042c7 has its CatchHandler @ 0240474c */
                    /* try { // try from 024042c8 to 025042db has its CatchHandler @ 02404750 */
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_38,*(undefined8 *)PTR_DAT_04cb7dc8);
  }
  return;
}

