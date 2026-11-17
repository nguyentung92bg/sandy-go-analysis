/* IL2CPP: Dino.BusSand.Cheat.AutoPlayHand$$StartIdleMove
void Dino_BusSand_Cheat_AutoPlayHand__StartIdleMove (Dino_BusSand_Cheat_AutoPlayHand_o* __this, Dino_BusSand_App_Gameplay_GameplayController_o* gc, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Cheat.AutoPlayHand$$StartIdleMove
   void Dino_BusSand_Cheat_AutoPlayHand__StartIdleMove (Dino_BusSand_Cheat_AutoPlayHand_o* __this,
   Dino_BusSand_App_Gameplay_GameplayController_o* gc, const MethodInfo* method); */

void Dino_BusSand_Cheat_AutoPlayHand__StartIdleMove_2340350
               (undefined1 param_1 [16],float param_2,undefined8 param_3,float param_4,long param_5,
               long param_6)

{
  undefined1 auVar1 [12];
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  undefined1 auStack_80 [12];
  undefined8 uStack_48;
  
  if ((bRam0000000004f9c679 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab9e0);
    FUN_02132f7c(PTR_DAT_04cab9e8);
    FUN_02132f7c(PTR_DAT_04cab9f0);
    FUN_02132f7c(PTR_DAT_04cab9f8);
    FUN_02132f7c(PTR_DAT_04cb4df0);
    FUN_02132f7c(PTR_DAT_04cb71d0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c679 = 1;
  }
  auStack_80._8_4_ = 0;
  auStack_80._0_8_ = 0;
  uStack_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  lStack_90 = 0;
  uStack_48 = 0;
  *(undefined4 *)(param_5 + 0x78) = 0xffffffff;
  fVar11 = (float)Dino_BusSand_Cheat_AutoPlayHand__RestPoint_233f554(param_5);
  fVar12 = (float)UnityEngine_Random__get_value_43b6570(0);
  if (fVar12 < _UNK_00e2098c) {
    if (param_6 == 0) goto LAB_024406a4;
    fVar12 = _UNK_00e2098c;
    lVar6 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_6,0);
    auVar1._8_4_ = auStack_80._8_4_;
    auVar1._0_8_ = auStack_80._0_8_;
    if ((lVar6 == 0) || (auStack_80 = auVar1, *(long *)(lVar6 + 0x28) == 0)) goto LAB_024406a4;
                    /* try { // try from 02440444 to 0254044b has its CatchHandler @ 024405bc */
    uStack_48 = Dino_BusSand_Core_TruckGrid__get_Trucks_241c3d0(*(long *)(lVar6 + 0x28),0);
                    /* try { // try from 02440454 to 025404b7 has its CatchHandler @ 024405c4 */
    Dino_BusSand_Core_ListView_object___GetEnumerator_3955958
              (&uStack_b8,&uStack_48,*(undefined8 *)PTR_DAT_04cab9f8);
    puVar3 = PTR_DAT_04cab9e8;
    puVar2 = PTR_DAT_04ca9ae8;
    iVar10 = 0;
    puStack_98 = puStack_b0;
    uStack_a0 = uStack_b8;
    iVar9 = -1;
    lStack_90 = lStack_a8;
    uStack_b8 = 0;
    puStack_b0 = &uStack_a0;
    while( true ) {
      uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_a0,*(undefined8 *)puVar3);
      lVar6 = lStack_90;
      fVar14 = (float)param_3;
      if ((uVar7 & 1) == 0) break;
      if (lStack_90 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(long *)(param_6 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
                    /* try { // try from 024404b8 to 025405b3 has its CatchHandler @ 024402c0 */
      uVar8 = Dino_BusSand_View_GameView__VehicleOf_23ab408
                        (*(long *)(param_6 + 0x38),*(undefined4 *)(lStack_90 + 0x10),0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
      if ((uVar7 & 1) != 0) {
        iVar10 = iVar10 + 1;
        iVar5 = UnityEngine_Random__Range_43b64e8(0,iVar10,0);
        if (iVar5 == 0) {
          iVar9 = *(int *)(lVar6 + 0x10);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_a0,*(undefined8 *)PTR_DAT_04cab9e0);
    if (iVar9 < 0) {
      auStack_80 = ZEXT812(0);
    }
    else {
      auStack_80 = Dino_BusSand_Cheat_AutoPlayHand__VehiclePoint_233fefc(param_5,param_6,iVar9);
      if ((auStack_80._0_8_ & 0xff) != 0) {
        fVar11 = (float)System_Nullable_Vector2___get_Value_2bd0a60
                                  (auStack_80,*(undefined8 *)PTR_DAT_04cb71d0);
        if (*(long *)(param_5 + 0x20) == 0) goto LAB_024406a4;
        UnityEngine_RectTransform__get_rect_43cf450(*(long *)(param_5 + 0x20),0);
        if (*(long *)(param_5 + 0x20) == 0) goto LAB_024406a4;
        UnityEngine_RectTransform__get_rect_43cf450(*(long *)(param_5 + 0x20),0);
        fVar11 = fVar11 + fVar14 * _UNK_00e20658;
        param_2 = fVar12 + param_4 * _UNK_00e20140;
      }
    }
  }
  cVar4 = cRam0000000004f9c550;
  fVar12 = *(float *)(param_5 + 0x58);
  fVar14 = *(float *)(param_5 + 0x5c);
                    /* try { // try from 024405b4 to 025405b7 has its CatchHandler @ 024405c0 */
                    /* try { // try from 024405b8 to 025405df has its CatchHandler @ 024402c0 */
  *(float *)(param_5 + 0x70) = fVar11;
  *(float *)(param_5 + 0x74) = param_2;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02440444 with catch @ 024405bc
                        */
  if (cVar4 == '\0') {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024405b4 with catch @ 024405c0
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02440454 with catch @ 024405c4
                        */
    FUN_02132f7c(PTR_DAT_04caa200);
    cRam0000000004f9c550 = '\x01';
  }
                    /* try { // try from 024405e0 to 025405e3 has its CatchHandler @ 024405fc */
                    /* try { // try from 024405e4 to 025405ff has its CatchHandler @ 024402c0 */
  if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (*(long *)(param_5 + 0x20) != 0) {
    fVar12 = fVar12 - fVar11;
    fVar14 = fVar14 - param_2;
                    /* catch() { ... } // from try @ 024405e0 with catch @ 024405fc */
                    /* try { // try from 02440600 to 02540607 has its CatchHandler @ 02440610 */
                    /* try { // try from 02440608 to 02540613 has its CatchHandler @ 024402c0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02440600 with catch @ 02440610
                        */
    UnityEngine_RectTransform__get_rect_43cf450(*(long *)(param_5 + 0x20),0);
    fVar14 = SQRT(fVar12 * fVar12 + fVar14 * fVar14) / (param_4 * _UNK_00e208e8);
    fVar12 = 1.0;
    if (fVar14 <= 1.0) {
      fVar12 = fVar14;
    }
    fVar13 = 0.0;
    if (0.0 <= fVar14) {
      fVar13 = fVar12;
    }
    fVar12 = 0.0;
    if (0.0 <= fVar13) {
      fVar12 = fVar13;
    }
    Dino_BusSand_Cheat_AutoPlayHand__StartTravel_2340738
              (fVar11,param_2,(fVar12 * _UNK_00e1fe7c + _UNK_00e20104) * _UNK_00e2068c,param_5);
    return;
  }
LAB_024406a4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

