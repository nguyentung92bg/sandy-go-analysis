/* IL2CPP: Dino.BusSand.App.UI.SimpleActivityContinuePanel$$OnOpen
void Dino_BusSand_App_UI_SimpleActivityContinuePanel__OnOpen (Dino_BusSand_App_UI_SimpleActivityContinuePanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.SimpleActivityContinuePanel$$OnOpen
   void Dino_BusSand_App_UI_SimpleActivityContinuePanel__OnOpen
   (Dino_BusSand_App_UI_SimpleActivityContinuePanel_o* __this, Il2CppObject* param, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_SimpleActivityContinuePanel__OnOpen_2189d40(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 uVar19;
  
  puVar2 = PTR_DAT_04cadba0;
                    /* try { // try from 02289d48 to 02389d83 has its CatchHandler @ 02289d48
                       catch() { ... } // from try @ 02289d48 with catch @ 02289d48
                       catch() { ... } // from try @ 02289dfc with catch @ 02289d48 */
  if ((bRam0000000004f9b972 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7e0);
                    /* try { // try from 02289d84 to 02389d8b has its CatchHandler @ 02289ec4 */
    FUN_02132f7c(PTR_DAT_04caa458);
                    /* try { // try from 02289d8c to 02389d9f has its CatchHandler @ 02289eb4 */
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cadbd8);
    FUN_02132f7c(PTR_DAT_04cadbe0);
                    /* try { // try from 02289db0 to 02389dc7 has its CatchHandler @ 02289ecc */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cadba0);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cadbe8);
                    /* try { // try from 02289de4 to 02389dfb has its CatchHandler @ 02289ec8 */
    FUN_02132f7c(PTR_DAT_04cadbf0);
    FUN_02132f7c(PTR_DAT_04cadbf8);
                    /* try { // try from 02289dfc to 02389edf has its CatchHandler @ 02289d48 */
    FUN_02132f7c(PTR_DAT_04cadc00);
    FUN_02132f7c(PTR_DAT_04caadd0);
    FUN_02132f7c(PTR_DAT_04cadc08);
    FUN_02132f7c(PTR_DAT_04cadc10);
    FUN_02132f7c(PTR_DAT_04cadc18);
    FUN_02132f7c(PTR_DAT_04cadc20);
    FUN_02132f7c(PTR_DAT_04cadc28);
    FUN_02132f7c(PTR_DAT_04cadab0);
    FUN_02132f7c(PTR_DAT_04cad940);
    FUN_02132f7c(PTR_DAT_04cadc30);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9b972 = 1;
  }
  puVar4 = PTR_DAT_04cadbe0;
  puVar3 = PTR_DAT_04cadbd8;
  if (param_2 == (long *)0x0) {
LAB_02289eb4:
                    /* catch() { ... } // from try @ 02289d8c with catch @ 02289eb4 */
                    /* catch() { ... } // from try @ 02289d84 with catch @ 02289ec4 */
    param_2 = (long *)thunk_FUN_0216e89c();
                    /* catch() { ... } // from try @ 02289de4 with catch @ 02289ec8 */
                    /* catch() { ... } // from try @ 02289db0 with catch @ 02289ecc */
    System_Object___ctor_4870e5c(param_2,0);
    lVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
    System_Collections_Generic_List_object____ctor_3a8138c(lVar11,*(undefined8 *)puVar3);
    if (param_2 == (long *)0x0) goto LAB_0228a208;
    param_2[2] = lVar11;
    thunk_FUN_02134474(param_2 + 2,lVar11);
  }
  else {
    bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2))
    goto LAB_02289eb4;
  }
  puVar9 = PTR_DAT_04cadc30;
  puVar8 = PTR_DAT_04cadbf8;
  puVar7 = PTR_DAT_04cadbf0;
  puVar6 = PTR_DAT_04cadbe8;
  puVar5 = PTR_DAT_04cad948;
  puVar4 = PTR_DAT_04cad940;
  puVar3 = PTR_DAT_04caa458;
  puVar2 = PTR_DAT_04ca9ae8;
  if (param_1 != 0) {
    *(long *)(param_1 + 0x38) = (long)param_2;
    thunk_FUN_02134474((long *)(param_1 + 0x38),param_2);
    uVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
    System_Action___ctor_47b5ed0(uVar12,param_1,*(undefined8 *)puVar7,0);
    uVar13 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
    System_Action___ctor_47b5ed0(uVar13,param_1,*(undefined8 *)puVar6,0);
    Dino_BusSand_App_UI_ActivityContinueUi__BindCommon_218604c(param_1,uVar12,uVar13);
    uVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
    System_Action___ctor_47b5ed0(uVar12,param_1,*(undefined8 *)puVar8,0);
    Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
              (param_1,*(undefined8 *)puVar4,uVar12,1,*(undefined8 *)puVar5,0);
    lVar11 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar9,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar14 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
    if ((uVar14 & 1) != 0) {
      if (lVar11 == 0) goto LAB_0228a208;
      uVar12 = UnityEngine_Component__get_gameObject_43bcde8(lVar11,0);
      puVar2 = PTR_DAT_04cadc18;
      lVar11 = *(long *)PTR_DAT_04cadc18;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar11);
        lVar11 = *(long *)puVar2;
      }
      puVar17 = *(undefined8 **)(lVar11 + 0xb8);
      lVar18 = puVar17[1];
      if (lVar18 == 0) {
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar11);
          puVar17 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
        }
        uVar13 = *puVar17;
        lVar18 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
        System_Action___ctor_47b5ed0(lVar18,uVar13,*(undefined8 *)PTR_DAT_04cadc10,0);
        plVar15 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
        *plVar15 = lVar18;
        thunk_FUN_02134474(plVar15,lVar18);
      }
      Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar12,lVar18,0,0,0);
    }
    lVar18 = *(long *)PTR_DAT_04ca9d18;
    lVar11 = *(long *)(lVar18 + 0x38);
    if (lVar11 == 0) {
      FUN_0216b4cc(lVar18);
      lVar11 = *(long *)(lVar18 + 0x38);
    }
    lVar11 = *(long *)(lVar11 + 0x10);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_0216b470();
    }
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar4 = PTR_DAT_04cadc28;
    puVar3 = PTR_DAT_04cadc20;
    puVar2 = PTR_DAT_04cadab0;
    lVar11 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_0216b470();
    }
    Dino_BusSand_App_UI_UIPanel__TxtKey_2200a70
              (param_1,*(undefined8 *)puVar3,*(undefined8 *)puVar4,**(undefined8 **)(lVar11 + 0xb8),
               0);
    uVar12 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar2,0);
    puVar5 = PTR_DAT_04cadc08;
    puVar4 = PTR_DAT_04cadc00;
    puVar3 = PTR_DAT_04cac7e0;
    puVar2 = PTR_DAT_04cabaf8;
    if (*(long *)(param_1 + 0x38) != 0) {
                    /* catch() { ... } // from try @ 0228a1d8 with catch @ 0228a174 */
                    /* try { // try from 0228a188 to 0238a18f has its CatchHandler @ 0228a218 */
      uVar19 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x10);
      uVar13 = FUN_02133068(*(undefined8 *)PTR_DAT_04caadd0,3);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
                (uVar13,*(undefined8 *)puVar5,0);
                    /* try { // try from 0228a1a8 to 0238a1ab has its CatchHandler @ 0228a214 */
      Dino_BusSand_App_UI_SimpleActivityContinuePanel__FillTiles_21890c8(uVar12,uVar19,uVar13);
      uVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
                    /* try { // try from 0228a1c4 to 0238a1cb has its CatchHandler @ 0228a21c */
                    /* try { // try from 0228a1d0 to 0238a1d7 has its CatchHandler @ 0228a220 */
      System_Action_int____ctor_35ef18c(uVar12,param_1,*(undefined8 *)puVar4,0);
                    /* try { // try from 0228a1d8 to 0238a23b has its CatchHandler @ 0228a174 */
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar2 = PTR_DAT_04cabaf8;
      if ((bRam0000000004f9c0e2 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cac7e0,0);
        FUN_02132f7c(PTR_DAT_04cabaf8);
        bRam0000000004f9c0e2 = 1;
      }
      lVar11 = *(long *)puVar2;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar11 = *(long *)puVar2;
      }
      puVar3 = PTR_DAT_04cac7e0;
      lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x18);
      do {
        lVar18 = System_Delegate__Combine_4872324(lVar11,uVar12,0);
        if (lVar18 == 0) {
          lVar16 = 0;
        }
        else {
          uVar13 = *(undefined8 *)puVar3;
          lVar16 = thunk_FUN_0216e7a0(lVar18,uVar13);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021335a4(lVar18,uVar13);
          }
        }
        lVar18 = *(long *)puVar2;
        if (*(int *)(lVar18 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar18 = *(long *)puVar2;
        }
        lVar18 = FUN_0216aff4(*(long *)(lVar18 + 0xb8) + 0x18,lVar16,lVar11);
        bVar10 = lVar18 != lVar11;
        lVar11 = lVar18;
      } while (bVar10);
      return;
    }
  }
LAB_0228a208:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

