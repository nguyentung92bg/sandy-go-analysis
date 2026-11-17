/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$BuildList
void Dino_BusSand_App_UI_PassportPanel__BuildList (Dino_BusSand_App_UI_PassportPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$BuildList
   void Dino_BusSand_App_UI_PassportPanel__BuildList (Dino_BusSand_App_UI_PassportPanel_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_PassportPanel__BuildList_21d355c(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  int iStack_64;
  
  puVar3 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bb4f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cad6c0);
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 022d35c8 to 023d3623 has its CatchHandler @ 022d30e8 */
    FUN_02132f7c(PTR_DAT_04cb0580);
    FUN_02132f7c(PTR_DAT_04cb0588);
                    /* catch() { ... } // from try @ 022d3140 with catch @ 022d35dc */
                    /* catch() { ... } // from try @ 022d33e4 with catch @ 022d35e0 */
    FUN_02132f7c(PTR_DAT_04cb0590);
                    /* catch() { ... } // from try @ 022d3268 with catch @ 022d35e4 */
                    /* catch() { ... } // from try @ 022d31c4 with catch @ 022d35e8
                       catch() { ... } // from try @ 022d3308 with catch @ 022d35e8 */
    FUN_02132f7c(PTR_DAT_04cb0598);
    FUN_02132f7c(PTR_DAT_04cae138);
    FUN_02132f7c(PTR_DAT_04cb05a0);
    FUN_02132f7c(PTR_DAT_04cb05a8);
    FUN_02132f7c(PTR_DAT_04cb05b0);
    FUN_02132f7c(PTR_DAT_04caf070);
                    /* try { // try from 022d362c to 023d3683 has its CatchHandler @ 022d362c
                       catch() { ... } // from try @ 022d362c with catch @ 022d362c
                       catch() { ... } // from try @ 022d3b0c with catch @ 022d362c */
    FUN_02132f7c(PTR_DAT_04cb05b8);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9bb4f = 1;
  }
  uVar16 = *(undefined8 *)(param_1 + 0x50);
  iStack_64 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = UnityEngine_Object__op_Equality_43c6f30(uVar16,0,0);
  if ((uVar8 & 1) == 0) {
                    /* try { // try from 022d3684 to 023d3697 has its CatchHandler @ 022d3b20 */
    uVar16 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cb05a8,0);
    *(undefined8 *)(param_1 + 0x60) = uVar16;
    thunk_FUN_02134474();
    lVar9 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cb0590,0);
    plVar10 = (long *)(param_1 + 0x68);
    *plVar10 = lVar9;
    thunk_FUN_02134474();
    lVar9 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cb05a0,0);
    plVar11 = (long *)(param_1 + 0x70);
    *plVar11 = lVar9;
    thunk_FUN_02134474();
                    /* try { // try from 022d3708 to 023d374f has its CatchHandler @ 022d3b2c */
    lVar9 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cae138,0);
    lVar12 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cb05b8,0);
    if (*(long *)(param_1 + 0x40) == 0) {
LAB_022d3ae8:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    iVar7 = Dino_BusSand_App_Meta_PassportFeature__get_StageCount_22449e0
                      (*(long *)(param_1 + 0x40),0);
    puVar5 = PTR_DAT_04caf070;
    puVar4 = PTR_DAT_04cad6c0;
    iStack_64 = 0;
    if (0 < iVar7) {
      do {
        iVar6 = iStack_64;
        lVar13 = lVar12;
        if (iStack_64 != iVar7 + -1) {
          lVar13 = lVar9;
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar8 = UnityEngine_Object__op_Equality_43c6f30(lVar13,0,0);
        if ((uVar8 & 1) == 0) {
          if (lVar13 == 0) goto LAB_022d3ae8;
          uVar16 = UnityEngine_Component__get_gameObject_43bcde8(lVar13,0);
          uVar17 = *(undefined8 *)(param_1 + 0x50);
                    /* try { // try from 022d37ac to 023d381f has its CatchHandler @ 022d3b28 */
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar3);
          }
          lVar13 = UnityEngine_Object__Instantiate_object__2805310
                             (uVar16,uVar17,0,*(undefined8 *)PTR_DAT_04cad390);
          puVar1 = (undefined8 *)PTR_DAT_04cb05b0;
          if (iVar6 != iVar7 + -1) {
            puVar1 = (undefined8 *)puVar5;
          }
          uVar17 = *puVar1;
          uVar16 = System_Int32__ToString_482d750(&iStack_64,0);
          uVar16 = System_String__Concat_46c82e0(uVar17,uVar16,0);
          if (lVar13 == 0) goto LAB_022d3ae8;
          UnityEngine_Object__set_name_43c72ec(lVar13,uVar16,0);
          UnityEngine_GameObject__SetActive_43c1408(lVar13,1,0);
          lVar18 = *(long *)(param_1 + 0x78);
          uVar16 = UnityEngine_GameObject__get_transform_43c1048(lVar13,0);
          if (lVar18 == 0) goto LAB_022d3ae8;
                    /* try { // try from 022d384c to 023d389b has its CatchHandler @ 022d3b2c */
          lVar14 = *(long *)(lVar18 + 0x10);
          lVar15 = *(long *)puVar4;
          *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_022d3ae8;
          uVar2 = *(uint *)(lVar18 + 0x18);
          if (uVar2 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar18 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar14 + (long)(int)uVar2 * 8 + 0x20) = uVar16;
            thunk_FUN_02134474();
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                      (lVar18,uVar16,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
          uVar16 = UnityEngine_GameObject__get_transform_43c1048(lVar13,0);
          Dino_BusSand_App_UI_PassportPanel__BindStage_21d4718(param_1,uVar16,iStack_64);
        }
        iStack_64 = iStack_64 + 1;
      } while (iStack_64 < iVar7);
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
    if ((uVar8 & 1) != 0) {
      if ((lVar9 == 0) ||
         (lVar9 = UnityEngine_Component__get_gameObject_43bcde8(lVar9,0), lVar9 == 0))
      goto LAB_022d3ae8;
      UnityEngine_GameObject__SetActive_43c1408(lVar9,0,0);
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 022d3928 to 023d3b0b has its CatchHandler @ 022d3b24 */
    uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar12,0,0);
    if ((uVar8 & 1) != 0) {
      if ((lVar12 == 0) ||
         (lVar9 = UnityEngine_Component__get_gameObject_43bcde8(lVar12,0), lVar9 == 0))
      goto LAB_022d3ae8;
      UnityEngine_GameObject__SetActive_43c1408(lVar9,0,0);
    }
    lVar9 = *plVar10;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
    if ((uVar8 & 1) != 0) {
      if (*plVar10 == 0) goto LAB_022d3ae8;
      uVar16 = UnityEngine_Component__get_gameObject_43bcde8(*plVar10,0);
      uVar17 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(uVar17,param_1,*(undefined8 *)PTR_DAT_04cb0580,0);
      Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar16,uVar17,0,*(undefined8 *)PTR_DAT_04cad948,0);
    }
    lVar9 = *plVar11;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
    lVar9 = 0;
    if ((uVar8 & 1) != 0) {
      if (*plVar11 == 0) goto LAB_022d3ae8;
      lVar9 = UnityEngine_Transform__Find_43d4bec(*plVar11,*(undefined8 *)PTR_DAT_04cb0598,0);
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
    if ((uVar8 & 1) != 0) {
      if (lVar9 == 0) goto LAB_022d3ae8;
      uVar16 = UnityEngine_Component__get_gameObject_43bcde8(lVar9,0);
      uVar17 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(uVar17,param_1,*(undefined8 *)PTR_DAT_04cb0588,0);
      Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar16,uVar17,1,*(undefined8 *)PTR_DAT_04cad948,0);
    }
    Dino_BusSand_App_UI_PassportPanel__Layout_21d4ecc(param_1);
  }
  return;
}

