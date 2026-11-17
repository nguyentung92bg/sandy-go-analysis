/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$RaiseExtra
void Dino_BusSand_App_UI_GuidePanel__RaiseExtra (Dino_BusSand_App_UI_GuidePanel_o* __this, UnityEngine_RectTransform_o* target, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02389668) */
/* WARNING: Removing unreachable block (ram,0x0238952c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$RaiseExtra
   void Dino_BusSand_App_UI_GuidePanel__RaiseExtra (Dino_BusSand_App_UI_GuidePanel_o* __this,
   UnityEngine_RectTransform_o* target, const MethodInfo* method); */

ulong Dino_BusSand_App_UI_GuidePanel__RaiseExtra_22c8df0(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  long *plStack_a8;
  long **pplStack_a0;
  long **pplStack_98;
  long *plStack_90;
  long **pplStack_88;
  long **pplStack_80;
  long *plStack_78;
  long *plStack_48;
  
  if ((bRam0000000004f9c375 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad3d0);
    FUN_02132f7c(PTR_DAT_04cacf88);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad330);
    bRam0000000004f9c375 = 1;
  }
  *(undefined8 *)(param_1 + 0x108) = param_2;
  thunk_FUN_02134474(param_1 + 0x108,param_2);
  puVar5 = PTR_DAT_04ca9ae8;
  if (*(long *)(param_1 + 0x108) == 0) {
LAB_023c8f70:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar16 = UnityEngine_Component__GetComponent_object__26f97e8
                     (*(long *)(param_1 + 0x108),*(undefined8 *)PTR_DAT_04cad3d0);
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar5);
  }
  uVar17 = UnityEngine_Object__op_Inequality_43c8dec(uVar16,0,0);
  if ((uVar17 & 1) != 0) {
    return uVar17;
  }
  if ((*(long *)(param_1 + 0x108) == 0) ||
     (lVar18 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x108),0),
     lVar18 == 0)) goto LAB_023c8f70;
  uVar16 = UnityEngine_GameObject__AddComponent_object__275a54c
                     (lVar18,*(undefined8 *)PTR_DAT_04cacf88);
  *(undefined8 *)(param_1 + 0x100) = uVar16;
  thunk_FUN_02134474(param_1 + 0x100,uVar16);
  if (*(long *)(param_1 + 0x100) == 0) goto LAB_023c8f70;
  UnityEngine_Canvas__set_overrideSorting_467ff6c(*(long *)(param_1 + 0x100),1,0);
  if (*(long *)(param_1 + 0x100) == 0) goto LAB_023c8f70;
  UnityEngine_Canvas__set_sortingOrder_46800e4(*(long *)(param_1 + 0x100),0x13ec,0);
  lVar18 = *(long *)(param_1 + 0x100);
  if (lVar18 == 0) goto LAB_023c8f70;
  uVar9 = UnityEngine_Canvas__get_additionalShaderChannels_468054c(lVar18,0);
  UnityEngine_Canvas__set_additionalShaderChannels_4680600(lVar18,uVar9 | 0x19,0);
  lVar18 = *(long *)(param_1 + 0x108);
  if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar5 = PTR_DAT_04cad330;
  uVar3 = _UNK_00e205f8;
  uVar2 = _UNK_00e200f8;
  if ((bRam0000000004f9c19a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb50d8,0);
    FUN_02132f7c(PTR_DAT_04cad688);
    FUN_02132f7c(PTR_DAT_04cad698);
    FUN_02132f7c(PTR_DAT_04cad6a8);
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
  lVar10 = *(long *)puVar5;
  plStack_48 = (long *)0x0;
  pplStack_80 = (long **)0x0;
  plStack_78 = (long *)0x0;
  plStack_90 = (long *)0x0;
  pplStack_88 = (long **)0x0;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar10 = *(long *)puVar5;
  }
  puVar4 = PTR_DAT_04ca9ae8;
  if (*(char *)(*(long *)(lVar10 + 0xb8) + 0x3c) == '\0') {
    return 0;
  }
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar17 = UnityEngine_Object__op_Equality_43c6f30(lVar18,0,0);
  puVar7 = PTR_DAT_04cb50e0;
  if ((uVar17 & 1) != 0) {
    return 0;
  }
  if (lVar18 == 0) goto LAB_02389664;
  plVar11 = (long *)UnityEngine_Transform__Find_43d4bec(lVar18,*(undefined8 *)PTR_DAT_04cb50e0,0);
  if (plVar11 == (long *)0x0) {
    plVar11 = (long *)0x0;
  }
  else if (*plVar11 != *(long *)PTR_DAT_04cabdb0) {
    plVar11 = (long *)0x0;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar17 = UnityEngine_Object__op_Equality_43c6f30(plVar11,0,0);
  if ((uVar17 & 1) != 0) {
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    uVar21 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
    uVar22 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    plVar11 = (long *)Dino_BusSand_App_UI_UiKit__Node_22818c4
                                (uVar21,uVar22,0,0,lVar18,*(undefined8 *)puVar7,0,0);
    Dino_BusSand_App_UI_UiKit__Stretch_2281f58(0,0,0,0);
    lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cad728);
    System_Collections_Generic_List_object____ctor_3a8138c(lVar10,*(undefined8 *)PTR_DAT_04cad6f0);
    plVar12 = (long *)UnityEngine_Transform__GetEnumerator_43d5014(lVar18,0);
    puVar8 = PTR_DAT_04cad740;
    puVar7 = PTR_DAT_04cad6c0;
    puVar5 = PTR_DAT_04ca9c08;
    pplStack_a0 = &plStack_48;
    plStack_a8 = (long *)0x0;
    pplStack_98 = &plStack_78;
joined_r0x023892ec:
    do {
      plStack_48 = plVar12;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar19 = *plVar12;
      lVar18 = *(long *)puVar5;
      uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar17 != 0) {
        piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == lVar18) {
            puVar13 = (undefined8 *)(lVar19 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_02389358;
          }
          uVar17 = uVar17 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_0216b7a4(plVar12,lVar18,0);
LAB_02389358:
      uVar17 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      plVar12 = plStack_48;
      puVar6 = PTR_DAT_04ca9b30;
      if ((uVar17 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_0216e7a0(plStack_48,*(undefined8 *)PTR_DAT_04ca9b30);
        plStack_78 = plVar12;
        if (plVar12 == (long *)0x0) goto LAB_02389520;
        lVar18 = *plVar12;
        uVar17 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar17 == 0) goto LAB_023894f8;
        piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        goto LAB_023894e0;
      }
      if (plStack_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar19 = *plStack_48;
      lVar18 = *(long *)puVar5;
      uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar17 != 0) {
        piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == lVar18) {
            puVar13 = (undefined8 *)(lVar19 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_023893c0;
          }
          uVar17 = uVar17 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_0216b7a4(plStack_48,lVar18,1);
LAB_023893c0:
      plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      if (plVar14 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar8 + 0x130);
        if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar8)) {
                    /* WARNING: Subroutine does not return */
          FUN_021335a4(plVar14);
        }
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar17 = UnityEngine_Object__op_Inequality_43c8dec(plVar14,plVar11,0);
      plVar12 = plStack_48;
    } while ((uVar17 & 1) == 0);
    if (lVar10 != 0) {
      lVar18 = *(long *)(lVar10 + 0x10);
      lVar19 = *(long *)puVar7;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar18 != 0) {
        uVar9 = *(uint *)(lVar10 + 0x18);
        if (uVar9 < *(uint *)(lVar18 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar9 + 1;
          plVar12 = (long *)(lVar18 + (long)(int)uVar9 * 8 + 0x20);
          *plVar12 = (long)plVar14;
          thunk_FUN_02134474(plVar12,plVar14);
          plVar12 = plStack_48;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (lVar10,plVar14,
                     *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
          plVar12 = plStack_48;
        }
        goto joined_r0x023892ec;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (plVar11 == (long *)0x0) goto LAB_02389664;
  goto LAB_023895bc;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar20 = piVar20 + 4;
    if (uVar17 == 0) break;
LAB_023894e0:
    if (*(long *)(piVar20 + -2) == *(long *)puVar6) {
      puVar13 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_02389514;
    }
  }
LAB_023894f8:
  puVar13 = (undefined8 *)FUN_0216b7a4(plVar12,*(long *)puVar6,0);
LAB_02389514:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_02389520:
  if (lVar10 == 0) goto LAB_02389664;
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&plStack_a8,lVar10,*(undefined8 *)PTR_DAT_04cad6d0);
  puVar5 = PTR_DAT_04cad698;
  pplStack_88 = pplStack_a0;
  plStack_90 = plStack_a8;
  pplStack_80 = pplStack_98;
  plStack_a8 = (long *)0x0;
  pplStack_a0 = &plStack_90;
  while (uVar17 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                            (&plStack_90,*(undefined8 *)puVar5), (uVar17 & 1) != 0) {
    if (pplStack_80 == (long **)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_Transform__SetParent_43d1e34(pplStack_80,plVar11,0,0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
            (&plStack_90,*(undefined8 *)PTR_DAT_04cad688);
  if (plVar11 == (long *)0x0) goto LAB_02389664;
  UnityEngine_Transform__SetAsFirstSibling_43d45d8(plVar11,0);
LAB_023895bc:
  uVar17 = UnityEngine_Component__GetComponent_object__26f97e8
                     (plVar11,*(undefined8 *)PTR_DAT_04cb50d8);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar4);
  }
  uVar15 = UnityEngine_Object__op_Equality_43c6f30(uVar17,0,0);
  if ((uVar15 & 1) != 0) {
    lVar18 = UnityEngine_Component__get_gameObject_43bcde8(plVar11,0);
    if (lVar18 == 0) goto LAB_02389664;
    uVar17 = UnityEngine_GameObject__AddComponent_object__275a54c
                       (lVar18,*(undefined8 *)PTR_DAT_04cb50e8);
  }
  if (uVar17 != 0) {
    *(undefined4 *)(uVar17 + 0x20) = uVar3;
    *(undefined4 *)(uVar17 + 0x24) = uVar2;
    return uVar17;
  }
LAB_02389664:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

