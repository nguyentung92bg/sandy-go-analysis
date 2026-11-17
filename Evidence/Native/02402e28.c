/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$OnAvatarSelected
void Dino_BusSand_App_UI_PlayerSettingPanel__OnAvatarSelected (Dino_BusSand_App_UI_PlayerSettingPanel_o* __this, int32_t headId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$OnAvatarSelected
   void Dino_BusSand_App_UI_PlayerSettingPanel__OnAvatarSelected
   (Dino_BusSand_App_UI_PlayerSettingPanel_o* __this, int32_t headId, const MethodInfo* method); */

void Dino_BusSand_App_UI_PlayerSettingPanel__OnAvatarSelected_2302e28
               (long param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar3 = PTR_DAT_04cae570;
  if ((bRam0000000004f9c4de & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb7dc8);
    FUN_02132f7c(PTR_DAT_04cb7dd0);
                    /* try { // try from 02402e74 to 02502e7b has its CatchHandler @ 02403148 */
    FUN_02132f7c(PTR_DAT_04cb7dd8);
    FUN_02132f7c(PTR_DAT_04cb7de0);
                    /* try { // try from 02402e8c to 02502e9b has its CatchHandler @ 024031a4 */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae570);
    FUN_02132f7c(PTR_DAT_04cb7ab8);
    bRam0000000004f9c4de = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  uStack_50 = 0;
  uStack_58 = 0;
  lStack_48 = 0;
  Dino_BusSand_App_UI_PlayerSettingPanel__HideLockTips_23028d8(param_1);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 02402ee8 to 02502f0b has its CatchHandler @ 02403144 */
  Dino_BusSand_App_Meta_PlayerIdentity__SetHeadIcon_226c424(param_2,0);
  uVar9 = *(undefined8 *)(param_1 + 0x78);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 02402f0c to 02502fc3 has its CatchHandler @ 02402ac4 */
  uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
  if ((uVar8 & 1) != 0) {
    lVar10 = *(long *)(param_1 + 0x78);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = Dino_BusSand_App_Meta_PlayerIdentity__get_HeadIcon_226beb4(0);
    if (lVar10 == 0) goto LAB_02403008;
    Dino_BusSand_App_UI_CommonHeadView__RefreshHead_22cf440(lVar10,uVar6,0);
  }
  puVar5 = PTR_DAT_04cb7dd0;
  puVar4 = PTR_DAT_04cb7dc8;
  puVar2 = PTR_DAT_04cb7ab8;
  if (*(long *)(param_1 + 0x60) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_58,*(long *)(param_1 + 0x60),*(undefined8 *)PTR_DAT_04cb7de0);
    while( true ) {
      uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_58,*(undefined8 *)puVar5);
      if ((uVar8 & 1) == 0) {
                    /* try { // try from 02402fe4 to 02502ff3 has its CatchHandler @ 02403134 */
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_58,*(undefined8 *)puVar4);
                    /* try { // try from 02402ffc to 02503063 has its CatchHandler @ 02403150 */
        return;
      }
      if (lStack_48 == 0) break;
      uVar9 = *(undefined8 *)(lStack_48 + 0x28);
      iVar1 = *(int *)(lStack_48 + 0x10);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      iVar7 = Dino_BusSand_App_Meta_PlayerIdentity__get_HeadIcon_226beb4(0);
                    /* try { // try from 02402fc4 to 02502fcb has its CatchHandler @ 0240313c */
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* try { // try from 02402fd8 to 02502fe3 has its CatchHandler @ 02403130 */
      Dino_BusSand_App_UI_PlayerSettingPanel__SetActive_230125c(uVar9,iVar1 == iVar7);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_02403008:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

