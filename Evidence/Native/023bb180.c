/* IL2CPP: Dino.BusSand.App.UI.StoreWaitingPanel$$OnOpen
void Dino_BusSand_App_UI_StoreWaitingPanel__OnOpen (Dino_BusSand_App_UI_StoreWaitingPanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.StoreWaitingPanel$$OnOpen
   void Dino_BusSand_App_UI_StoreWaitingPanel__OnOpen (Dino_BusSand_App_UI_StoreWaitingPanel_o*
   __this, Il2CppObject* param, const MethodInfo* method); */

void Dino_BusSand_App_UI_StoreWaitingPanel__OnOpen_22bb180(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  float fVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 *puVar21;
  float fVar22;
  float fStack_f8;
  float fStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  
  puVar6 = PTR_DAT_04cad330;
  if ((bRam0000000004f9c307 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cacf98);
    FUN_02132f7c(PTR_DAT_04cb1b08);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04cb6490);
    FUN_02132f7c(PTR_DAT_04cb6498);
    FUN_02132f7c(PTR_DAT_04cafb20);
    FUN_02132f7c(PTR_DAT_04cb64a0);
    FUN_02132f7c(PTR_DAT_04cafaf8);
    FUN_02132f7c(PTR_DAT_04cadc30);
    FUN_02132f7c(PTR_DAT_04cb64a8);
    FUN_02132f7c(PTR_DAT_04cb64b0);
    FUN_02132f7c(PTR_DAT_04cb64b8);
    FUN_02132f7c(PTR_DAT_04cad4a8);
    bRam0000000004f9c307 = 1;
  }
  puVar7 = PTR_DAT_04cadc30;
  iStack_a4 = 0;
  uVar15 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar6);
  }
  lVar16 = Dino_BusSand_App_UI_UiKit__Fill_22817d8(0,0,0,0,uVar15,*(undefined8 *)puVar7,0);
  if ((lVar16 != 0) &&
     (lVar17 = UnityEngine_Component__get_gameObject_43bcde8(lVar16,0), lVar17 != 0)) {
    UnityEngine_GameObject__AddComponent_object__275a54c(lVar17,*(undefined8 *)PTR_DAT_04cb1b08);
    lVar16 = UnityEngine_Component__get_gameObject_43bcde8(lVar16,0);
    if ((lVar16 != 0) &&
       (plVar18 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                    (lVar16,*(undefined8 *)PTR_DAT_04cacf98),
       puVar13 = PTR_DAT_04cb64b8, puVar12 = PTR_DAT_04cb64b0, puVar7 = PTR_DAT_04cb64a0,
       uVar3 = _UNK_00e20754, plVar18 != (long *)0x0)) {
      (**(code **)(*plVar18 + 0x2a8))
                (_UNK_00e20840,_UNK_00e20844,_UNK_00e20754,_UNK_00e208e8,plVar18,
                 *(undefined8 *)(*plVar18 + 0x2b0));
      (**(code **)(*plVar18 + 0x2c8))(plVar18,1,*(undefined8 *)(*plVar18 + 0x2d0));
      uVar15 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
      if (cRam0000000004f9b948 == '\0') {
        FUN_02132f7c(PTR_DAT_04cacfc0);
        cRam0000000004f9b948 = '\x01';
      }
      puVar11 = PTR_DAT_04cb64a8;
      puVar10 = PTR_DAT_04cb6490;
      puVar9 = PTR_DAT_04cafb20;
      puVar8 = PTR_DAT_04cafaf8;
      puVar5 = PTR_DAT_04ca9d18;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      uVar15 = Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                         (0x44160000,0x432a0000,**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                          (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],_UNK_00e20224,
                          uVar15,*(undefined8 *)puVar7,*(undefined8 *)puVar13,&uStack_b8,0);
      uVar19 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                         (0x42c80000,0x42c80000,0xc3440000,0x40800000,uVar15,*(undefined8 *)puVar12,
                          0,0,0);
      fVar4 = _UNK_00e2082c;
      fVar2 = _UNK_00e20390;
      fVar1 = _UNK_00e200f8;
      iStack_a4 = 0;
      while( true ) {
        fVar22 = (float)iStack_a4;
        uVar20 = System_Int32__ToString_482d750(&iStack_a4,0);
        uVar20 = System_String__Concat_46c82e0(*(undefined8 *)puVar9,uVar20,0);
        sincosf(fVar22 * fVar4 * 0.25,&fStack_f4,&fStack_f8);
        fVar14 = fStack_f4;
        fVar22 = fStack_f8;
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        plVar18 = (long *)Dino_BusSand_App_UI_UiKit__Img_228203c
                                    (0x41a00000,0x41a00000,fVar14 * 38.0,fVar22 * 38.0,0x3f800000,
                                     uVar19,uVar20,*(undefined8 *)puVar8,0,0);
        if (plVar18 == (long *)0x0) break;
        puVar21 = *(undefined4 **)(*(long *)puVar6 + 0xb8);
        (**(code **)(*plVar18 + 0x2a8))
                  (*puVar21,puVar21[1],puVar21[2],((float)iStack_a4 * fVar1) / 7.0 + fVar2,plVar18,
                   *(undefined8 *)(*plVar18 + 0x2b0));
        iStack_a4 = iStack_a4 + 1;
        if (7 < iStack_a4) {
          lVar17 = *(long *)puVar5;
          lVar16 = *(long *)(lVar17 + 0x38);
          if (lVar16 == 0) {
            FUN_0216b4cc(lVar17);
            lVar16 = *(long *)(lVar17 + 0x38);
          }
          lVar16 = *(long *)(lVar16 + 0x10);
          if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = FUN_0216b470();
          }
          if (*(int *)(lVar16 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar16 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
          if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = FUN_0216b470();
          }
          uVar20 = **(undefined8 **)(lVar16 + 0xb8);
          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar6);
          }
          uVar20 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                             (*(undefined8 *)puVar11,*(undefined8 *)puVar10,uVar20,0);
          puVar21 = *(undefined4 **)(*(long *)puVar6 + 0xb8);
          uStack_d0 = 0;
          uStack_c8 = 0;
          uStack_c0 = 0;
          System_Nullable_Color____ctor_2bc9090
                    (*puVar21,puVar21[1],puVar21[2],puVar21[3],&uStack_d0,
                     *(undefined8 *)PTR_DAT_04cac878);
          uStack_e0 = uStack_c0;
          uStack_e8 = uStack_c8;
          uStack_f0 = uStack_d0;
          Dino_BusSand_App_UI_UiKit__Text_2282314
                    (0x42600000,0x43be0000,0x42b40000,0x42700000,0x40800000,uVar15,
                     *(undefined8 *)PTR_DAT_04cb6498,uVar20,*(undefined8 *)PTR_DAT_04cad4a8,
                     &uStack_f0,0x202,0);
          if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
                    (uVar3,fVar1,0x3e800000,_UNK_00e205ec,uVar15,0,0,0);
          uVar15 = Dino_BusSand_App_UI_StoreWaitingPanel__Spin_22bb718(uVar19);
          Dino_BusSand_App_UI_UIPanel__Run_2200f98(param_1,uVar15,0);
          uVar15 = Dino_BusSand_App_UI_StoreWaitingPanel__Timeout_22bb784(param_1);
          Dino_BusSand_App_UI_UIPanel__Run_2200f98(param_1,uVar15,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

