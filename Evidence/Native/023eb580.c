/* IL2CPP: Dino.BusSand.App.UI.HomePanel$$Rebuild
void Dino_BusSand_App_UI_HomePanel__Rebuild (Dino_BusSand_App_UI_HomePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x023ebbf4) */
/* WARNING: Removing unreachable block (ram,0x023ebbec) */
/* IL2CPP: Dino.BusSand.App.UI.HomePanel$$Rebuild
   void Dino_BusSand_App_UI_HomePanel__Rebuild (Dino_BusSand_App_UI_HomePanel_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HomePanel__Rebuild_22eb580(long *param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long **pplVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  long *plStack_98;
  long **pplStack_90;
  long **pplStack_88;
  long *plStack_80;
  long **pplStack_78;
  long **pplStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  puVar6 = PTR_DAT_04cb75b8;
  puVar4 = PTR_DAT_04caa070;
  if ((bRam0000000004f9c43f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad688);
    FUN_02132f7c(PTR_DAT_04cad698);
    FUN_02132f7c(PTR_DAT_04cad6a8);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04cad7b8);
    FUN_02132f7c(PTR_DAT_04cac4f8);
    FUN_02132f7c(PTR_DAT_04cad6c0);
    FUN_02132f7c(PTR_DAT_04cb75c0);
    FUN_02132f7c(PTR_DAT_04cad6d0);
    FUN_02132f7c(PTR_DAT_04cad6f0);
    FUN_02132f7c(PTR_DAT_04cad728);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad740);
    FUN_02132f7c(PTR_DAT_04cb75b8);
    bRam0000000004f9c43f = 1;
  }
  plStack_60 = (long *)0x0;
  uStack_58 = 0;
  pplStack_70 = (long **)0x0;
  plStack_68 = (long *)0x0;
  plStack_80 = (long *)0x0;
  pplStack_78 = (long **)0x0;
  lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  UnityEngine_GameObject___ctor_43c20cc(lVar10,*(undefined8 *)puVar6,0);
  if (lVar10 != 0) {
    lVar11 = UnityEngine_GameObject__get_transform_43c1048(lVar10,0);
    uVar12 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
    puVar6 = PTR_DAT_04cad728;
    puVar4 = PTR_DAT_04cad6f0;
    if (lVar11 != 0) {
      UnityEngine_Transform__SetParent_43d1e34(lVar11,uVar12,0,0);
      lVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
      System_Collections_Generic_List_object____ctor_3a8138c(lVar11,*(undefined8 *)puVar4);
      lVar13 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
      puVar4 = PTR_DAT_04ca9ae8;
      if (lVar13 != 0) {
        plVar14 = (long *)UnityEngine_Transform__GetEnumerator_43d5014(lVar13,0);
        puVar8 = PTR_DAT_04cad740;
        puVar7 = PTR_DAT_04cad6c0;
        puVar6 = PTR_DAT_04ca9c08;
        pplStack_90 = &plStack_60;
        plStack_98 = (long *)0x0;
        pplStack_88 = &plStack_68;
joined_r0x023eb734:
        do {
          plStack_60 = plVar14;
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar17 = *plVar14;
          lVar13 = *(long *)puVar6;
          uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == lVar13) {
                puVar15 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_023eb7a0;
              }
              uVar18 = uVar18 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar18 != 0);
          }
          puVar15 = (undefined8 *)FUN_0216b7a4(plVar14,lVar13,0);
LAB_023eb7a0:
          uVar18 = (*(code *)*puVar15)(plVar14,puVar15[1]);
          plVar14 = plStack_60;
          puVar5 = PTR_DAT_04ca9b30;
          if ((uVar18 & 1) == 0) {
            plVar14 = (long *)thunk_FUN_0216e7a0(plStack_60,*(undefined8 *)PTR_DAT_04ca9b30);
            plStack_68 = plVar14;
            if (plVar14 == (long *)0x0) goto LAB_023eb96c;
            lVar13 = *plVar14;
            uVar18 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar18 == 0) goto LAB_023eb944;
            piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            goto LAB_023eb92c;
          }
          if (plStack_60 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar17 = *plStack_60;
          lVar13 = *(long *)puVar6;
          uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == lVar13) {
                puVar15 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                goto LAB_023eb808;
              }
              uVar18 = uVar18 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar18 != 0);
          }
          puVar15 = (undefined8 *)FUN_0216b7a4(plStack_60,lVar13,1);
LAB_023eb808:
          plVar16 = (long *)(*(code *)*puVar15)(plVar14,puVar15[1]);
          if (plVar16 != (long *)0x0) {
            bVar2 = *(byte *)(*(long *)puVar8 + 0x130);
            if ((*(byte *)(*plVar16 + 0x130) < bVar2) ||
               (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar8)) {
                    /* WARNING: Subroutine does not return */
              FUN_021335a4(plVar16);
            }
          }
          uVar12 = UnityEngine_GameObject__get_transform_43c1048(lVar10,0);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar18 = UnityEngine_Object__op_Inequality_43c8dec(plVar16,uVar12,0);
          plVar14 = plStack_60;
        } while ((uVar18 & 1) == 0);
        if (lVar11 != 0) {
          lVar13 = *(long *)(lVar11 + 0x10);
          lVar17 = *(long *)puVar7;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar13 != 0) {
            uVar3 = *(uint *)(lVar11 + 0x18);
            if (uVar3 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar3 + 1;
              plVar14 = (long *)(lVar13 + (long)(int)uVar3 * 8 + 0x20);
              *plVar14 = (long)plVar16;
              thunk_FUN_02134474(plVar14,plVar16);
              plVar14 = plStack_60;
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (lVar11,plVar16,
                         *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              plVar14 = plStack_60;
            }
            goto joined_r0x023eb734;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
  }
  goto LAB_023ebbe8;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
LAB_023eb92c:
    if (*(long *)(piVar19 + -2) == *(long *)puVar5) {
      puVar15 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_023eb960;
    }
  }
LAB_023eb944:
  puVar15 = (undefined8 *)FUN_0216b7a4(plVar14,*(long *)puVar5,0);
LAB_023eb960:
  (*(code *)*puVar15)(plVar14,puVar15[1]);
LAB_023eb96c:
  puVar5 = PTR_DAT_04cad7b8;
  puVar8 = PTR_DAT_04cad698;
  puVar7 = PTR_DAT_04cad688;
  puVar6 = PTR_DAT_04cac4f8;
  if (lVar11 != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&plStack_98,lVar11,*(undefined8 *)PTR_DAT_04cad6d0);
    pplStack_70 = pplStack_88;
    pplStack_78 = pplStack_90;
    plStack_80 = plStack_98;
    plStack_98 = (long *)0x0;
    pplStack_90 = &plStack_80;
    while (uVar18 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                              (&plStack_80,*(undefined8 *)puVar8), pplVar9 = pplStack_70,
          (uVar18 & 1) != 0) {
      uVar12 = UnityEngine_GameObject__get_transform_43c1048(lVar10,0);
      if (pplVar9 == (long **)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224(uVar12,uVar12);
      }
      UnityEngine_Transform__SetParent_43d1e34(pplVar9,uVar12,0,0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&plStack_80,*(undefined8 *)puVar7);
    UnityEngine_GameObject__SetActive_43c1408(lVar10,0,0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    UnityEngine_Object__Destroy_43c8114(lVar10,0);
    param_1[0x10] = 0;
    thunk_FUN_02134474(param_1 + 0x10,0);
    param_1[0xe] = 0;
    thunk_FUN_02134474(param_1 + 0xe,0);
    param_1[8] = 0;
    thunk_FUN_02134474(param_1 + 8,0);
    param_1[7] = 0;
    thunk_FUN_02134474(param_1 + 7,0);
    param_1[0xf] = 0;
    thunk_FUN_02134474(param_1 + 0xf,0);
    param_1[10] = 0;
    thunk_FUN_02134474(param_1 + 10,0);
    Dino_BusSand_App_UI_HomePanel__DropStage_22eb108(param_1);
    *(undefined1 *)(param_1 + 0xc) = 0;
    param_1[0x13] = 0;
    thunk_FUN_02134474(param_1 + 0x13,0);
    param_1[0x12] = 0;
    thunk_FUN_02134474(param_1 + 0x12,0);
    param_1[0x11] = 0;
    thunk_FUN_02134474(param_1 + 0x11,0);
    lVar10 = param_1[0x18];
    if (lVar10 != 0) {
      iVar1 = *(int *)(lVar10 + 0x18);
      *(undefined4 *)(lVar10 + 0x18) = 0;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear_4851dc8(*(undefined8 *)(lVar10 + 0x10),0,iVar1,0);
      }
      lVar10 = *(long *)puVar6;
      *(undefined1 *)((long)param_1 + 0x4c) = 0;
      *(undefined4 *)(param_1 + 9) = 0xffffffff;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar18 = Dino_BusSand_App_UI_KitPrefabs__Respawn_2181bdc(param_1,0);
      uVar12 = 0;
      if ((uVar18 & 1) != 0) {
        uVar12 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
        lVar10 = *(long *)puVar5;
        lVar11 = param_1[4];
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar10);
        }
        uVar12 = Dino_BusSand_App_UI_KitAdopt__Begin_227d2a0(uVar12,lVar11,0);
      }
      pplStack_90 = (long **)&uStack_58;
      plStack_98 = (long *)0x0;
      uStack_58 = uVar12;
      (**(code **)(*param_1 + 0x178))(param_1,0,*(undefined8 *)(*param_1 + 0x180));
      uVar12 = uStack_58;
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_KitAdopt__End_227e4f0(uVar12,0);
      return;
    }
  }
LAB_023ebbe8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

