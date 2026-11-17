/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$SetMenIndex
void Dino_BusSand_App_UI_BattleRoyaleScenePanel__SetMenIndex (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, UnityEngine_Transform_o* item, int32_t index, bool locked, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$SetMenIndex
   void Dino_BusSand_App_UI_BattleRoyaleScenePanel__SetMenIndex
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, UnityEngine_Transform_o* item, int32_t
   index, bool locked, const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyaleScenePanel__SetMenIndex_2193614
               (undefined8 param_1,long param_2,uint param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uStack_54;
  
  puVar2 = PTR_DAT_04ca9ae8;
                    /* try { // try from 0229361c to 02393633 has its CatchHandler @ 022937dc */
  uStack_54 = param_3;
  if ((bRam0000000004f9b9b3 & 1) == 0) {
                    /* try { // try from 02293654 to 0239365b has its CatchHandler @ 022937d8 */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae1c8);
    FUN_02132f7c(PTR_DAT_04cae1d0);
    FUN_02132f7c(PTR_DAT_04cae1e8);
    FUN_02132f7c(PTR_DAT_04cae1d8);
    bRam0000000004f9b9b3 = 1;
  }
  lVar4 = Dino_BusSand_App_UI_BattleRoyaleScenePanel__GateOf_2193a88(param_2);
                    /* try { // try from 0229369c to 023936a7 has its CatchHandler @ 022937c8 */
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* try { // try from 022936b0 to 023936cf has its CatchHandler @ 022937d0 */
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar4,0,0);
  if ((uVar5 & 1) == 0) {
    if (param_2 == 0) {
LAB_02293974:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    puVar1 = (undefined8 *)PTR_DAT_04cae1d8;
    if ((param_3 & 1) != 0) {
      puVar1 = (undefined8 *)PTR_DAT_04cae1e8;
    }
    uVar6 = UnityEngine_Transform__Find_43d4bec(param_2,*puVar1,0);
                    /* try { // try from 022936f8 to 0239371b has its CatchHandler @ 022937d4 */
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
    if ((uVar5 & 1) == 0) {
      if (lVar4 == 0) goto LAB_02293974;
    }
    else {
      if (lVar4 == 0) goto LAB_02293974;
      UnityEngine_Transform__SetParent_43d1e34(lVar4,uVar6,0,0);
      if (cRam0000000004f9b65d == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65d = '\x01';
      }
      puVar3 = PTR_DAT_04caa208;
      puVar8 = *(undefined4 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
      UnityEngine_Transform__set_localPosition_43cfda8(*puVar8,puVar8[1],puVar8[2],lVar4,0);
                    /* try { // try from 02293784 to 023937a7 has its CatchHandler @ 022937cc */
      if (cRam0000000004f9b65e == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65e = '\x01';
      }
                    /* try { // try from 022937a8 to 023937ef has its CatchHandler @ 022935f0 */
      lVar9 = *(long *)(*(long *)puVar3 + 0xb8);
      UnityEngine_Transform__set_localScale_43d1be0
                (*(undefined4 *)(lVar9 + 0xc),*(undefined4 *)(lVar9 + 0x10),
                 *(undefined4 *)(lVar9 + 0x14),lVar4,0);
      if (cRam0000000004f9b88b == '\0') {
                    /* catch() { ... } // from try @ 0229369c with catch @ 022937c8 */
                    /* catch() { ... } // from try @ 02293784 with catch @ 022937cc */
        FUN_02132f7c(PTR_DAT_04cab4b0);
                    /* catch() { ... } // from try @ 022936b0 with catch @ 022937d0 */
                    /* catch() { ... } // from try @ 022936f8 with catch @ 022937d4 */
        cRam0000000004f9b88b = '\x01';
      }
                    /* catch() { ... } // from try @ 02293654 with catch @ 022937d8 */
                    /* catch() { ... } // from try @ 0229361c with catch @ 022937dc */
      puVar8 = *(undefined4 **)(*(long *)PTR_DAT_04cab4b0 + 0xb8);
      UnityEngine_Transform__set_localRotation_43d156c
                (*puVar8,puVar8[1],puVar8[2],puVar8[3],lVar4,0);
    }
                    /* try { // try from 02293814 to 0239383b has its CatchHandler @ 02293814
                       catch() { ... } // from try @ 02293814 with catch @ 02293814
                       catch() { ... } // from try @ 02293848 with catch @ 02293814 */
    lVar9 = UnityEngine_Transform__Find_43d4bec(lVar4,*(undefined8 *)PTR_DAT_04cae1d0,0);
    lVar7 = UnityEngine_Transform__Find_43d4bec(lVar4,*(undefined8 *)PTR_DAT_04cae1c8,0);
                    /* try { // try from 0229383c to 02393847 has its CatchHandler @ 0229385c */
    if ((param_3 & 1) == 0) {
      uVar11 = 0xbf800000;
      uVar12 = 0x3f800000;
                    /* try { // try from 02293848 to 0239386f has its CatchHandler @ 02293814 */
      uVar13 = 0x3f800000;
    }
    else {
      if (cRam0000000004f9b65e == '\0') {
                    /* catch() { ... } // from try @ 0229383c with catch @ 0229385c */
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65e = '\x01';
      }
                    /* try { // try from 02293870 to 02393893 has its CatchHandler @ 02293870
                       catch() { ... } // from try @ 02293870 with catch @ 02293870
                       catch() { ... } // from try @ 0229389c with catch @ 02293870 */
      lVar10 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
      uVar11 = *(undefined4 *)(lVar10 + 0xc);
      uVar13 = *(undefined4 *)(lVar10 + 0x10);
      uVar12 = *(undefined4 *)(lVar10 + 0x14);
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* try { // try from 02293894 to 0239389b has its CatchHandler @ 022938c0 */
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 0229389c to 023938db has its CatchHandler @ 02293870 */
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
    if ((uVar5 & 1) != 0) {
      if (lVar9 == 0) goto LAB_02293974;
                    /* catch() { ... } // from try @ 02293894 with catch @ 022938c0 */
      UnityEngine_Transform__set_localScale_43d1be0(uVar11,uVar13,uVar12,lVar9,0);
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
    if ((uVar5 & 1) != 0) {
      if (lVar7 == 0) goto LAB_02293974;
      UnityEngine_Transform__set_localScale_43d1be0(uVar11,uVar13,uVar12,lVar7,0);
    }
    Dino_BusSand_App_UI_BattleRoyaleUi__SetActive_219a5e8(lVar9,0 < (int)param_3,0);
    Dino_BusSand_App_UI_BattleRoyaleUi__SetActive_219a5e8(lVar7,param_3 == 0,0);
    uVar6 = System_Int32__ToString_482d750(&uStack_54,0);
    Dino_BusSand_App_UI_BattleRoyaleUi__SetTexts_219a108(lVar9,uVar6,0);
    Dino_BusSand_App_UI_BattleRoyaleScenePanel__SetMenLock_2193b1c(lVar4,param_4 & 1);
  }
                    /* try { // try from 0229396c to 02393997 has its CatchHandler @ 0229396c
                       catch() { ... } // from try @ 0229396c with catch @ 0229396c
                       catch() { ... } // from try @ 022939a4 with catch @ 0229396c */
  return;
}

