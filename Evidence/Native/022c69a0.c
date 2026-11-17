/* IL2CPP: Dino.BusSand.App.UI.TowerEventPanel$$Update
void Dino_BusSand_App_UI_TowerEventPanel__Update (Dino_BusSand_App_UI_TowerEventPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.TowerEventPanel$$Update
   void Dino_BusSand_App_UI_TowerEventPanel__Update (Dino_BusSand_App_UI_TowerEventPanel_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_TowerEventPanel__Update_21c69a0(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 extraout_x1;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  float fVar7;
  undefined1 auVar8 [16];
  
  if ((bRam0000000004f9bafc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04caf910);
                    /* try { // try from 022c69d8 to 023c69e7 has its CatchHandler @ 022c6a50 */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04caf610);
    FUN_02132f7c(PTR_DAT_04caf620);
                    /* try { // try from 022c6a00 to 023c6a07 has its CatchHandler @ 022c6a34 */
    bRam0000000004f9bafc = 1;
  }
                    /* try { // try from 022c6a08 to 023c6a73 has its CatchHandler @ 022c6900 */
  fVar7 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
  if (fVar7 < *(float *)(param_1 + 0x7c)) {
                    /* try { // try from 022c6ad8 to 023c6ae3 has its CatchHandler @ 022c6bdc */
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c6a00 with catch @ 022c6a34
                        */
    thunk_FUN_0218fdac();
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c6998 with catch @ 022c6a38
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c6950 with catch @ 022c6a3c
                        */
  uVar1 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c6944 with catch @ 022c6a4c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c6988 with catch @ 022c6a50
                       catch(type#1 @ 00000000) { ... } // from try @ 022c69d8 with catch @ 022c6a50
                        */
  if (*(long *)(param_1 + 0x38) == 0) {
    return;
  }
  fVar7 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c6928 with catch @ 022c6a60
                        */
  *(float *)(param_1 + 0x7c) = fVar7 + 1.0;
  uVar4 = 0;
  uVar3 = extraout_x1;
  if (*(long *)(param_1 + 0x38) == 0) goto LAB_022c6ba0;
  plVar5 = *(long **)(param_1 + 0x58);
                    /* try { // try from 022c6a74 to 023c6a7b has its CatchHandler @ 022c6a84 */
  auVar8 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_IsValid_2229654(*(long *)(param_1 + 0x38),0)
  ;
                    /* try { // try from 022c6a7c to 023c6a87 has its CatchHandler @ 022c6900 */
  if ((auVar8._0_8_ & 1) == 0) {
                    /* try { // try from 022c6ae4 to 023c6af3 has its CatchHandler @ 022c6bcc */
    lVar6 = *(long *)PTR_DAT_04ca9d18;
    lVar2 = *(long *)(lVar6 + 0x38);
    if (lVar2 == 0) {
      FUN_0216b4cc(lVar6);
      lVar2 = *(long *)(lVar6 + 0x38);
    }
    lVar2 = *(long *)(lVar2 + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0216b470();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 022c6b1c to 023c6b2b has its CatchHandler @ 022c6be0 */
    lVar2 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
                    /* try { // try from 022c6b2c to 023c6b4b has its CatchHandler @ 022c6bc8 */
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0216b470();
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad330);
    }
                    /* try { // try from 022c6b6c to 023c6b7b has its CatchHandler @ 022c6be0 */
    uVar4 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                      (*(undefined8 *)PTR_DAT_04caf610,*(undefined8 *)PTR_DAT_04caf620,uVar4,0);
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c6a74 with catch @ 022c6a84
                        */
    uVar4 = 0;
    uVar3 = auVar8._8_8_;
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_022c6ba0;
                    /* try { // try from 022c6a88 to 023c6a8b has its CatchHandler @ 022c6a94 */
                    /* try { // try from 022c6a8c to 023c6a97 has its CatchHandler @ 022c6900 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c6a88 with catch @ 022c6a94
                        */
    auVar8 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                       (*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_04caf910);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c6b9c with catch @ 022c6a98
                       catch(type#1 @ 00000000) { ... } // from try @ 022c6c0c with catch @ 022c6a98
                       catch(type#1 @ 00000000) { ... } // from try @ 022c6c1c with catch @ 022c6a98
                        */
    uVar4 = 0;
    uVar3 = auVar8._8_8_;
    if (auVar8._0_8_ == 0) goto LAB_022c6ba0;
    lVar6 = *(long *)(auVar8._0_8_ + 0x28);
    lVar2 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0);
                    /* try { // try from 022c6abc to 023c6ac7 has its CatchHandler @ 022c6bf0 */
    uVar4 = Dino_BusSand_App_UI_EventKit__EndsIn_21b8344((lVar6 - lVar2) / 1000);
  }
  uVar3 = uVar4;
  if (plVar5 != (long *)0x0) {
                    /* try { // try from 022c6b94 to 023c6b9b has its CatchHandler @ 022c6bc4 */
                    /* WARNING: Could not recover jumptable at 0x022c6b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 022c6b9c to 023c6c03 has its CatchHandler @ 022c6a98 */
    (**(code **)(*plVar5 + 0x518))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0x520));
    return;
  }
LAB_022c6ba0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224(uVar4,uVar3);
}

