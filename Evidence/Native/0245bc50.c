/* IL2CPP: Dino.BusSand.Cheat.CheatHint$$Show
bool Dino_BusSand_Cheat_CheatHint__Show (Dino_BusSand_Cheat_CheatHint_o* __this, float seconds, System_String_o** why, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Cheat.CheatHint$$Show
   bool Dino_BusSand_Cheat_CheatHint__Show (Dino_BusSand_Cheat_CheatHint_o* __this, float seconds,
   System_String_o** why, const MethodInfo* method); */

undefined8
Dino_BusSand_Cheat_CheatHint__Show_235bc50(float param_1,long param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  float fVar10;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  long lStack_60;
  
  puVar2 = PTR_DAT_04cac868;
  if ((bRam0000000004f9c72b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab9e0);
    FUN_02132f7c(PTR_DAT_04cab9e8);
    FUN_02132f7c(PTR_DAT_04cab9f0);
    FUN_02132f7c(PTR_DAT_04cac868);
    FUN_02132f7c(PTR_DAT_04cab9f8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cba448);
    FUN_02132f7c(PTR_DAT_04cba450);
    bRam0000000004f9c72b = 1;
  }
  uStack_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  lStack_60 = 0;
  uStack_78 = 0;
  *param_3 = 0;
  thunk_FUN_02134474(param_3,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9bcf9 == '\0') {
    FUN_02132f7c(PTR_DAT_04cac868);
    cRam0000000004f9bcf9 = '\x01';
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  lVar8 = *(long *)puVar1;
  lVar4 = **(long **)(lVar4 + 0xb8);
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar8);
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar4,0,0);
  puVar9 = (undefined8 *)PTR_DAT_04cba450;
  if ((uVar5 & 1) != 0) {
LAB_0245bebc:
    *param_3 = *puVar9;
    thunk_FUN_02134474(param_3);
                    /* try { // try from 0245bed0 to 0255bedb has its CatchHandler @ 0245c0d8 */
    return 0;
  }
  if (lVar4 != 0) {
    if ((*(int *)(lVar4 + 0x20) != 2) ||
       (lVar8 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(lVar4,0),
       puVar9 = (undefined8 *)PTR_DAT_04cba450, lVar8 == 0)) goto LAB_0245bebc;
    lVar8 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(lVar4,0);
    iVar3 = Dino_BusSand_Core_SimBot__BestTap_241b8b8(lVar8,0);
    if (iVar3 < 0) {
      if ((lVar8 == 0) || (*(long *)(lVar8 + 0x28) == 0)) goto LAB_0245bfc0;
      uStack_78 = Dino_BusSand_Core_TruckGrid__get_Trucks_241c3d0(*(long *)(lVar8 + 0x28),0);
      Dino_BusSand_Core_ListView_object___GetEnumerator_3955958
                (&uStack_90,&uStack_78,*(undefined8 *)PTR_DAT_04cab9f8);
      puVar2 = PTR_DAT_04cab9e8;
      puStack_68 = puStack_88;
      uStack_70 = uStack_90;
      lStack_60 = lStack_80;
      uStack_90 = 0;
      puStack_88 = &uStack_70;
      do {
        uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                          (&uStack_70,*(undefined8 *)puVar2);
        lVar7 = lStack_60;
        if ((uVar5 & 1) == 0) goto LAB_0245be50;
        if (*(long *)(lVar8 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar5 = Dino_BusSand_Core_TruckGrid__CanEscape_2423be4(*(long *)(lVar8 + 0x28),lStack_60,0);
                    /* try { // try from 0245be44 to 0255be4b has its CatchHandler @ 0245c0fc */
      } while ((uVar5 & 1) == 0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      iVar3 = *(int *)(lVar7 + 0x10);
LAB_0245be50:
                    /* try { // try from 0245be54 to 0255be5b has its CatchHandler @ 0245c0e4 */
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_70,*(undefined8 *)PTR_DAT_04cab9e0);
      puVar9 = (undefined8 *)PTR_DAT_04cba448;
      if (iVar3 < 0) goto LAB_0245bebc;
    }
                    /* try { // try from 0245be6c to 0255be73 has its CatchHandler @ 0245c0e8 */
    if (*(long *)(lVar4 + 0x38) != 0) {
                    /* try { // try from 0245be78 to 0255be7f has its CatchHandler @ 0245c0ec */
      uVar6 = Dino_BusSand_View_GameView__VehicleOf_23ab408(*(long *)(lVar4 + 0x38),iVar3,0);
      lVar8 = *(long *)puVar1;
      if (*(int *)(lVar8 + 0xe4) == 0) {
                    /* try { // try from 0245be90 to 0255be9b has its CatchHandler @ 0245c0f0 */
        thunk_FUN_0218fdac(lVar8);
      }
                    /* try { // try from 0245be9c to 0255bea3 has its CatchHandler @ 0245c0f4 */
      uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
                    /* try { // try from 0245bea4 to 0255beb3 has its CatchHandler @ 0245c0f8 */
      puVar9 = (undefined8 *)PTR_DAT_04cba448;
      if ((uVar5 & 1) != 0) goto LAB_0245bebc;
      *(int *)(param_2 + 0x38) = iVar3;
                    /* try { // try from 0245bef8 to 0255beff has its CatchHandler @ 0245c04c */
      *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(lVar4 + 0x28);
      fVar10 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
                    /* try { // try from 0245bf0c to 0255bf13 has its CatchHandler @ 0245c040 */
      *(undefined4 *)(param_2 + 0x44) = 0;
      *(float *)(param_2 + 0x40) = fVar10 + param_1;
      if ((*(long *)(param_2 + 0x28) != 0) &&
         (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_2 + 0x28),0),
         lVar8 != 0)) {
                    /* try { // try from 0245bf2c to 0255bf37 has its CatchHandler @ 0245c038 */
        UnityEngine_GameObject__SetActive_43c1408(lVar8,1,0);
        if ((*(long *)(lVar4 + 0x38) != 0) &&
           (lVar8 = Dino_BusSand_View_GameView__VehicleOf_23ab408(*(long *)(lVar4 + 0x38),iVar3,0),
           lVar8 != 0)) {
                    /* try { // try from 0245bf54 to 0255bf63 has its CatchHandler @ 0245c03c */
          Dino_BusSand_View_VehicleView__Kick_23fd8a0(_UNK_00e208cc,0x3e800000,lVar8,0);
          lVar7 = Dino_BusSand_App_Gameplay_GameplayController__get_Cam_229b328(lVar4,0);
                    /* try { // try from 0245bf70 to 0255bf7f has its CatchHandler @ 0245c034 */
          if ((lVar7 != 0) &&
             (lVar7 = UnityEngine_Component__get_transform_43bcd18(lVar7,0), lVar7 != 0)) {
            UnityEngine_Transform__get_right_43d15f4(lVar7,0);
            if ((*(long *)(lVar4 + 0x38) != 0) && (*(long *)(*(long *)(lVar4 + 0x38) + 0x30) != 0))
            {
              Dino_BusSand_View_VehicleView__Wiggle_23fda78(lVar8,0);
              Dino_BusSand_Cheat_CheatHint__Place_235c030(param_2);
              return 1;
            }
          }
        }
      }
    }
  }
LAB_0245bfc0:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0245bfc0 to 0255bfe3 has its CatchHandler @ 0245c048 */
  FUN_02133224();
}

