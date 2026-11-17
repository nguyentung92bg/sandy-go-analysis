/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$BindStage
void Dino_BusSand_App_UI_PassportPanel__BindStage (Dino_BusSand_App_UI_PassportPanel_o* __this, UnityEngine_Transform_o* node, int32_t i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$BindStage
   void Dino_BusSand_App_UI_PassportPanel__BindStage (Dino_BusSand_App_UI_PassportPanel_o* __this,
   UnityEngine_Transform_o* node, int32_t i, const MethodInfo* method); */

void Dino_BusSand_App_UI_PassportPanel__BindStage_21d4718
               (undefined8 param_1,long param_2,undefined4 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 *puVar19;
  uint uVar20;
  
  puVar2 = PTR_DAT_04cb0668;
  if ((bRam0000000004f9bb54 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cad790);
    FUN_02132f7c(PTR_DAT_04cad950);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 022d47b0 to 023d480f has its CatchHandler @ 022d4b08 */
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cb0670);
    FUN_02132f7c(PTR_DAT_04cb0678);
    FUN_02132f7c(PTR_DAT_04cb0680);
    FUN_02132f7c(PTR_DAT_04cb0688);
    FUN_02132f7c(PTR_DAT_04cb0690);
    FUN_02132f7c(PTR_DAT_04cb0698);
    FUN_02132f7c(PTR_DAT_04cb0668);
    FUN_02132f7c(PTR_DAT_04cb06a0);
    FUN_02132f7c(PTR_DAT_04cb06a8);
    FUN_02132f7c(PTR_DAT_04cb06b0);
    FUN_02132f7c(PTR_DAT_04cb06b8);
    FUN_02132f7c(PTR_DAT_04cb06c0);
    FUN_02132f7c(PTR_DAT_04cb06c8);
                    /* try { // try from 022d4850 to 023d4873 has its CatchHandler @ 022d4b0c */
    FUN_02132f7c(PTR_DAT_04cadc80);
    FUN_02132f7c(PTR_DAT_04cb06d0);
    FUN_02132f7c(PTR_DAT_04cb06d8);
    FUN_02132f7c(PTR_DAT_04cb06e0);
    FUN_02132f7c(PTR_DAT_04cb06e8);
    FUN_02132f7c(PTR_DAT_04cad948);
    FUN_02132f7c(PTR_DAT_04cb06f0);
    bRam0000000004f9bb54 = 1;
  }
  lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar10,0);
  if (lVar10 != 0) {
    *(undefined8 *)(lVar10 + 0x10) = param_1;
    thunk_FUN_02134474((undefined8 *)(lVar10 + 0x10),param_1);
    *(undefined4 *)(lVar10 + 0x18) = param_3;
    puVar2 = PTR_DAT_04ca9ae8;
    if (param_2 != 0) {
                    /* try { // try from 022d48e4 to 023d48ef has its CatchHandler @ 022d4b10 */
      lVar11 = UnityEngine_Transform__Find_43d4bec(param_2,*(undefined8 *)PTR_DAT_04cadc80,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      uVar12 = UnityEngine_Object__op_Equality_43c6f30(lVar11,0,0);
      if ((uVar12 & 1) != 0) {
        return;
      }
      if (lVar11 != 0) {
        lVar13 = UnityEngine_Transform__Find_43d4bec(lVar11,*(undefined8 *)PTR_DAT_04cb06c0,0);
        lVar14 = UnityEngine_Transform__Find_43d4bec(lVar11,*(undefined8 *)PTR_DAT_04cb06e8,0);
                    /* try { // try from 022d496c to 023d496f has its CatchHandler @ 022d4b04 */
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar2);
        }
        uVar12 = UnityEngine_Object__op_Inequality_43c8dec(lVar13,0,0);
        if ((uVar12 & 1) != 0) {
          if (lVar13 == 0) goto LAB_022d4ec8;
          uVar15 = UnityEngine_Component__get_gameObject_43bcde8(lVar13,0);
          puVar3 = PTR_DAT_04caa458;
          uVar16 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
          System_Action___ctor_47b5ed0(uVar16,lVar10,*(undefined8 *)PTR_DAT_04cb0678,0);
          Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8
                    (uVar15,uVar16,1,*(undefined8 *)PTR_DAT_04cad948,0);
          uVar15 = UnityEngine_Transform__Find_43d4bec(lVar13,*(undefined8 *)PTR_DAT_04cb06e0,0);
          uVar16 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
                    /* try { // try from 022d4a1c to 023d4a5b has its CatchHandler @ 022d4b00 */
          System_Action___ctor_47b5ed0(uVar16,lVar10,*(undefined8 *)PTR_DAT_04cb0680,0);
          Dino_BusSand_App_UI_PassportPanel__Rebind_21d55d8(uVar15,uVar16);
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
                    /* try { // try from 022d4a5c to 023d4b2b has its CatchHandler @ 022d4694 */
        uVar12 = UnityEngine_Object__op_Inequality_43c8dec(lVar14,0,0);
        if ((uVar12 & 1) != 0) {
          if (lVar14 == 0) goto LAB_022d4ec8;
          uVar15 = UnityEngine_Component__get_gameObject_43bcde8(lVar14,0);
          puVar3 = PTR_DAT_04caa458;
          uVar16 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
          System_Action___ctor_47b5ed0(uVar16,lVar10,*(undefined8 *)PTR_DAT_04cb0688,0);
          Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8
                    (uVar15,uVar16,1,*(undefined8 *)PTR_DAT_04cad948,0);
          uVar15 = UnityEngine_Transform__Find_43d4bec(lVar14,*(undefined8 *)PTR_DAT_04cb06e0,0);
          uVar16 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
                    /* catch() { ... } // from try @ 022d4a1c with catch @ 022d4b00 */
                    /* catch() { ... } // from try @ 022d496c with catch @ 022d4b04 */
                    /* catch() { ... } // from try @ 022d47b0 with catch @ 022d4b08 */
                    /* catch() { ... } // from try @ 022d4850 with catch @ 022d4b0c */
          System_Action___ctor_47b5ed0(uVar16,lVar10,*(undefined8 *)PTR_DAT_04cb0690,0);
                    /* catch() { ... } // from try @ 022d48e4 with catch @ 022d4b10 */
          Dino_BusSand_App_UI_PassportPanel__Rebind_21d55d8(uVar15,uVar16);
        }
        uVar15 = UnityEngine_Transform__Find_43d4bec(lVar11,*(undefined8 *)PTR_DAT_04cb06f0,0);
        puVar3 = PTR_DAT_04caa458;
                    /* try { // try from 022d4b34 to 023d4bbf has its CatchHandler @ 022d4b34
                       catch() { ... } // from try @ 022d4b34 with catch @ 022d4b34
                       catch() { ... } // from try @ 022d50c8 with catch @ 022d4b34 */
        uVar16 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
        System_Action___ctor_47b5ed0(uVar16,lVar10,*(undefined8 *)PTR_DAT_04cb0698,0);
        Dino_BusSand_App_UI_PassportPanel__Rebind_21d55d8(uVar15,uVar16);
        lVar10 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,4);
        if (lVar10 != 0) {
          if (*(int *)(lVar10 + 0x18) != 0) {
            *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)PTR_DAT_04cb06b0;
            thunk_FUN_02134474((undefined8 *)(lVar10 + 0x20));
            if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) != 0) {
                    /* try { // try from 022d4bc0 to 023d4bd3 has its CatchHandler @ 022d512c */
              *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)PTR_DAT_04cb06d0;
              thunk_FUN_02134474((undefined8 *)(lVar10 + 0x28));
              if (2 < *(uint *)(lVar10 + 0x18)) {
                *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)PTR_DAT_04cb06b8;
                thunk_FUN_02134474((undefined8 *)(lVar10 + 0x30));
                if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) != 0) {
                  *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)PTR_DAT_04cb06a8;
                  thunk_FUN_02134474((undefined8 *)(lVar10 + 0x38));
                  puVar5 = PTR_DAT_04cb06a0;
                  puVar4 = PTR_DAT_04cb0670;
                    /* try { // try from 022d4c30 to 023d4c77 has its CatchHandler @ 022d5138 */
                  if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
                    uVar12 = 0;
                    uVar18 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
                    do {
                      if (uVar18 <= uVar12) goto LAB_022d4ec4;
                      uVar15 = UnityEngine_Transform__Find_43d4bec
                                         (lVar11,*(undefined8 *)(lVar10 + 0x20 + uVar12 * 8),0);
                      lVar13 = *(long *)puVar5;
                      if (*(int *)(lVar13 + 0xe4) == 0) {
                        thunk_FUN_0218fdac(lVar13);
                        lVar13 = *(long *)puVar5;
                      }
                      puVar19 = *(undefined8 **)(lVar13 + 0xb8);
                      lVar14 = puVar19[1];
                      if (lVar14 == 0) {
                        if (*(int *)(lVar13 + 0xe4) == 0) {
                          thunk_FUN_0218fdac(lVar13);
                          puVar19 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                        }
                        uVar16 = *puVar19;
                        lVar14 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
                        System_Action___ctor_47b5ed0(lVar14,uVar16,*(undefined8 *)puVar4,0);
                    /* try { // try from 022d4cd0 to 023d4d43 has its CatchHandler @ 022d5134 */
                        plVar17 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
                        *plVar17 = lVar14;
                        thunk_FUN_02134474(plVar17,lVar14);
                      }
                      Dino_BusSand_App_UI_PassportPanel__Rebind_21d55d8(uVar15,lVar14);
                      uVar18 = (ulong)*(uint *)(lVar10 + 0x18);
                      uVar12 = uVar12 + 1;
                    } while ((long)uVar12 < (long)(int)*(uint *)(lVar10 + 0x18));
                  }
                  lVar10 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                                     (param_2,1,*(undefined8 *)PTR_DAT_04cad950);
                  puVar8 = PTR_DAT_04cb06d8;
                  puVar7 = PTR_DAT_04cb06c8;
                  puVar6 = PTR_DAT_04caec68;
                  puVar5 = PTR_DAT_04cad790;
                  puVar4 = PTR_DAT_04cab550;
                  puVar3 = PTR_DAT_04ca9d18;
                  if (lVar10 == 0) goto LAB_022d4ec8;
                  uVar1 = *(uint *)(lVar10 + 0x18);
                  if ((int)uVar1 < 1) {
                    return;
                  }
                  uVar20 = 0;
                  while (uVar20 < uVar1) {
                    /* try { // try from 022d4d6c to 023d4eff has its CatchHandler @ 022d5138 */
                    lVar11 = *(long *)(lVar10 + (long)(int)uVar20 * 8 + 0x20);
                    if (lVar11 == 0) goto LAB_022d4ec8;
                    uVar15 = UnityEngine_Object__get_name_43c71a4(lVar11,0);
                    uVar12 = System_String__op_Equality_46d1108(uVar15,*(undefined8 *)puVar8,0);
                    if ((uVar12 & 1) != 0) {
                      uVar15 = UnityEngine_Component__GetComponent_object__26f97e8
                                         (lVar11,*(undefined8 *)puVar5);
                      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                        thunk_FUN_0218fdac(*(long *)puVar2);
                      }
                      uVar12 = UnityEngine_Object__op_Equality_43c6f30(uVar15,0,0);
                      if (((uVar12 & 1) != 0) &&
                         (iVar9 = UnityEngine_Transform__get_childCount_43d4480(lVar11,0), 0 < iVar9
                         )) {
                        uVar15 = UnityEngine_Transform__Find_43d4bec(lVar11,*(undefined8 *)puVar8,0)
                        ;
                        lVar13 = *(long *)puVar3;
                        lVar11 = *(long *)(lVar13 + 0x38);
                        if (lVar11 == 0) {
                          FUN_0216b4cc(lVar13);
                          lVar11 = *(long *)(lVar13 + 0x38);
                        }
                        lVar11 = *(long *)(lVar11 + 0x10);
                        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
                          lVar11 = FUN_0216b470();
                        }
                        if (*(int *)(lVar11 + 0xe4) == 0) {
                          thunk_FUN_0218fdac();
                        }
                        lVar11 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
                        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
                          lVar11 = FUN_0216b470();
                        }
                        uVar16 = **(undefined8 **)(lVar11 + 0xb8);
                        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                          thunk_FUN_0218fdac(*(long *)puVar4);
                        }
                        uVar16 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)puVar7,uVar16,0);
                        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                          thunk_FUN_0218fdac(*(long *)puVar6);
                        }
                        Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar15,uVar16,0);
                      }
                    }
                    uVar1 = *(uint *)(lVar10 + 0x18);
                    uVar20 = uVar20 + 1;
                    if ((int)uVar1 <= (int)uVar20) {
                      return;
                    }
                  }
                }
              }
            }
          }
LAB_022d4ec4:
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
      }
    }
  }
LAB_022d4ec8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

