/* IL2CPP: Dino.BusSand.App.UI.UiKit$$Breathe
Dino_BusSand_App_UI_KitPulse_o* Dino_BusSand_App_UI_UiKit__Breathe (UnityEngine_Transform_o* button, float amount, float period, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02389668) */
/* WARNING: Removing unreachable block (ram,0x0238952c) */
/* IL2CPP: Dino.BusSand.App.UI.UiKit$$Breathe
   Dino_BusSand_App_UI_KitPulse_o* Dino_BusSand_App_UI_UiKit__Breathe (UnityEngine_Transform_o*
   button, float amount, float period, const MethodInfo* method); */

long Dino_BusSand_App_UI_UiKit__Breathe_2289058(undefined4 param_1,undefined4 param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  long *plStack_a8;
  long **pplStack_a0;
  long **pplStack_98;
  long *plStack_90;
  long **pplStack_88;
  long **pplStack_80;
  long *plStack_78;
  long *plStack_48;
  
  puVar5 = PTR_DAT_04cad330;
  if ((bRam0000000004f9c19a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb50d8);
    FUN_02132f7c(PTR_DAT_04cad688);
    FUN_02132f7c(PTR_DAT_04cad698);
    FUN_02132f7c(PTR_DAT_04cad6a8);
                    /* try { // try from 023890c8 to 0248945b has its CatchHandler @ 023890c8
                       catch() { ... } // from try @ 023890c8 with catch @ 023890c8
                       catch() { ... } // from try @ 02389488 with catch @ 023890c8
                       catch() { ... } // from try @ 023894e0 with catch @ 023890c8
                       catch() { ... } // from try @ 023896ac with catch @ 023890c8 */
    FUN_02132f7c(PTR_DAT_04cb50e8);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04cad6c0);
    FUN_02132f7c(PTR_DAT_04cad6d0);
    FUN_02132f7c(PTR_DAT_04cad6f0);
    FUN_02132f7c(PTR_DAT_04cad728);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cad740);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb50e0);
    bRam0000000004f9c19a = 1;
  }
  lVar8 = *(long *)puVar5;
  plStack_48 = (long *)0x0;
  pplStack_80 = (long **)0x0;
  plStack_78 = (long *)0x0;
  plStack_90 = (long *)0x0;
  pplStack_88 = (long **)0x0;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar5;
  }
  puVar3 = PTR_DAT_04ca9ae8;
  if (*(char *)(*(long *)(lVar8 + 0xb8) + 0x3c) == '\0') {
    return 0;
  }
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Equality_43c6f30(param_3,0,0);
  puVar6 = PTR_DAT_04cb50e0;
  if ((uVar9 & 1) != 0) {
    return 0;
  }
  if (param_3 == 0) goto LAB_02389664;
  plVar10 = (long *)UnityEngine_Transform__Find_43d4bec(param_3,*(undefined8 *)PTR_DAT_04cb50e0,0);
  if (plVar10 == (long *)0x0) {
    plVar10 = (long *)0x0;
  }
  else if (*plVar10 != *(long *)PTR_DAT_04cabdb0) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Equality_43c6f30(plVar10,0,0);
  if ((uVar9 & 1) != 0) {
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    uVar17 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
    uVar18 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    plVar10 = (long *)Dino_BusSand_App_UI_UiKit__Node_22818c4
                                (uVar17,uVar18,0,0,param_3,*(undefined8 *)puVar6,0,0);
    Dino_BusSand_App_UI_UiKit__Stretch_2281f58(0,0,0,0);
    lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cad728);
    System_Collections_Generic_List_object____ctor_3a8138c(lVar8,*(undefined8 *)PTR_DAT_04cad6f0);
    plVar11 = (long *)UnityEngine_Transform__GetEnumerator_43d5014(param_3,0);
    puVar7 = PTR_DAT_04cad740;
    puVar6 = PTR_DAT_04cad6c0;
    puVar5 = PTR_DAT_04ca9c08;
    pplStack_a0 = &plStack_48;
    plStack_a8 = (long *)0x0;
    pplStack_98 = &plStack_78;
joined_r0x023892ec:
    do {
      plStack_48 = plVar11;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar15 = *plVar11;
      lVar14 = *(long *)puVar5;
      uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar9 != 0) {
        piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar14) {
            puVar12 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_02389358;
          }
          uVar9 = uVar9 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar9 != 0);
      }
      puVar12 = (undefined8 *)FUN_0216b7a4(plVar11,lVar14,0);
LAB_02389358:
      uVar9 = (*(code *)*puVar12)(plVar11,puVar12[1]);
      plVar11 = plStack_48;
      puVar4 = PTR_DAT_04ca9b30;
      if ((uVar9 & 1) == 0) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0238945c with catch @ 023894b0
                        */
        plVar11 = (long *)thunk_FUN_0216e7a0(plStack_48,*(undefined8 *)PTR_DAT_04ca9b30);
        plStack_78 = plVar11;
        if (plVar11 == (long *)0x0) goto LAB_02389520;
        lVar14 = *plVar11;
                    /* try { // try from 023894c8 to 024894df has its CatchHandler @ 023896a4 */
        uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar9 == 0) goto LAB_023894f8;
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        goto LAB_023894e0;
      }
      if (plStack_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar15 = *plStack_48;
      lVar14 = *(long *)puVar5;
      uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar9 != 0) {
        piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar14) {
            puVar12 = (undefined8 *)(lVar15 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_023893c0;
          }
          uVar9 = uVar9 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar9 != 0);
      }
      puVar12 = (undefined8 *)FUN_0216b7a4(plStack_48,lVar14,1);
LAB_023893c0:
      plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
      if (plVar13 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar7 + 0x130);
        if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar7)) {
                    /* WARNING: Subroutine does not return */
          FUN_021335a4(plVar13);
        }
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar9 = UnityEngine_Object__op_Inequality_43c8dec(plVar13,plVar10,0);
      plVar11 = plStack_48;
    } while ((uVar9 & 1) == 0);
    if (lVar8 != 0) {
      lVar14 = *(long *)(lVar8 + 0x10);
      lVar15 = *(long *)puVar6;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar14 != 0) {
        uVar2 = *(uint *)(lVar8 + 0x18);
        if (uVar2 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                    /* try { // try from 0238945c to 02489487 has its CatchHandler @ 023894b0 */
          plVar11 = (long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20);
          *plVar11 = (long)plVar13;
          thunk_FUN_02134474(plVar11,plVar13);
          plVar11 = plStack_48;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (lVar8,plVar13,
                     *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          plVar11 = plStack_48;
        }
        goto joined_r0x023892ec;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (plVar10 == (long *)0x0) goto LAB_02389664;
  goto LAB_023895bc;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar16 = piVar16 + 4;
    if (uVar9 == 0) break;
LAB_023894e0:
                    /* try { // try from 023894e0 to 0248968f has its CatchHandler @ 023890c8 */
    if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
      puVar12 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_02389514;
    }
  }
LAB_023894f8:
  puVar12 = (undefined8 *)FUN_0216b7a4(plVar11,*(long *)puVar4,0);
LAB_02389514:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
LAB_02389520:
  if (lVar8 == 0) goto LAB_02389664;
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&plStack_a8,lVar8,*(undefined8 *)PTR_DAT_04cad6d0);
  puVar5 = PTR_DAT_04cad698;
  pplStack_88 = pplStack_a0;
  plStack_90 = plStack_a8;
  pplStack_80 = pplStack_98;
  plStack_a8 = (long *)0x0;
  pplStack_a0 = &plStack_90;
  while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                           (&plStack_90,*(undefined8 *)puVar5), (uVar9 & 1) != 0) {
    if (pplStack_80 == (long **)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_Transform__SetParent_43d1e34(pplStack_80,plVar10,0,0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
            (&plStack_90,*(undefined8 *)PTR_DAT_04cad688);
  if (plVar10 == (long *)0x0) goto LAB_02389664;
  UnityEngine_Transform__SetAsFirstSibling_43d45d8(plVar10,0);
LAB_023895bc:
  lVar8 = UnityEngine_Component__GetComponent_object__26f97e8
                    (plVar10,*(undefined8 *)PTR_DAT_04cb50d8);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  uVar9 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
  if ((uVar9 & 1) != 0) {
    lVar8 = UnityEngine_Component__get_gameObject_43bcde8(plVar10,0);
    if (lVar8 == 0) goto LAB_02389664;
    lVar8 = UnityEngine_GameObject__AddComponent_object__275a54c
                      (lVar8,*(undefined8 *)PTR_DAT_04cb50e8);
  }
  if (lVar8 != 0) {
    *(undefined4 *)(lVar8 + 0x20) = param_1;
    *(undefined4 *)(lVar8 + 0x24) = param_2;
    return lVar8;
  }
LAB_02389664:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

