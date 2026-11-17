/* IL2CPP: Dino.BusSand.App.UiAssets$$Preload<object>
System_Func_bool__o* Dino_BusSand_App_UiAssets__Preload_object_ (System_Collections_Generic_Dictionary_string__string__o* table, System_Collections_Generic_IList_string__o* names, const MethodInfo_2947310* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02a477b4) */
/* IL2CPP: Dino.BusSand.App.UiAssets$$Preload<object>
   System_Func_bool__o* Dino_BusSand_App_UiAssets__Preload_object_
   (System_Collections_Generic_Dictionary_string__string__o* table,
   System_Collections_Generic_IList_string__o* names, const MethodInfo_2947310* method); */

undefined8
Dino_BusSand_App_UiAssets__Preload_object__2947310(long param_1,long *param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long **pplStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  plVar10 = *(long **)(param_3 + 0x38);
  if (plVar10 == (long *)0x0) {
    FUN_02132f7c(PTR_DAT_04cac348);
    FUN_02132f7c(PTR_DAT_04cc52e0);
    FUN_02132f7c(PTR_DAT_04cab608);
    FUN_02132f7c(PTR_DAT_04cac8c0);
    FUN_02132f7c(PTR_DAT_04cab7e0);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cbe520);
    FUN_02132f7c(PTR_DAT_04cbe528);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04cab490);
    plVar10 = *(long **)(param_3 + 0x38);
    if (plVar10 == (long *)0x0) {
      FUN_0216b4cc(param_3);
      plVar10 = *(long **)(param_3 + 0x38);
    }
  }
  uStack_70 = 0;
  plStack_68 = (long *)0x0;
  uStack_80 = 0;
  uStack_78 = 0;
  if ((*(ushort *)(*plVar10 + 0x135) & 1) == 0) {
    FUN_0216b470();
  }
  lVar7 = thunk_FUN_0216e89c();
  Dino_BusSand_App_UiAssets___c__DisplayClass18_0_object____ctor_2a28134
            (lVar7,*(undefined8 *)(*(long *)(param_3 + 0x38) + 8));
  if ((lVar7 == 0) || (*(undefined4 *)(lVar7 + 0x10) = 0, param_2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar11 = *param_2;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_04cbe520) {
        puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_02a4745c;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar8 = (undefined8 *)FUN_0216b7a4(param_2,*(long *)PTR_DAT_04cbe520,0);
LAB_02a4745c:
  plVar10 = (long *)(*(code *)*puVar8)(param_2,puVar8[1]);
  puVar6 = PTR_DAT_04cc52e0;
  puVar5 = PTR_DAT_04cbe528;
  puVar4 = PTR_DAT_04cab608;
  puVar3 = PTR_DAT_04cab490;
  puVar2 = PTR_DAT_04ca9c08;
  pplStack_88 = &plStack_68;
  uStack_90 = 0;
  do {
    plStack_68 = plVar10;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar11 = *plVar10;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_02a474f0;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_0216b7a4(plVar10,*(long *)puVar2,0);
LAB_02a474f0:
    uVar12 = (*(code *)*puVar8)(plVar10,puVar8[1]);
    plVar10 = plStack_68;
    if ((uVar12 & 1) == 0) {
      if (plStack_68 == (long *)0x0) goto LAB_02a47748;
      lVar11 = *plStack_68;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 == 0) goto LAB_02a47720;
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    if (plStack_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar11 = *plStack_68;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_02a47554;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_0216b7a4(plStack_68,*(long *)puVar5,0);
LAB_02a47554:
    lVar11 = (*(code *)*puVar8)(plVar10,puVar8[1]);
    if ((*(ushort *)(*(long *)(*(long *)(param_3 + 0x38) + 0x10) + 0x135) & 1) == 0) {
      FUN_0216b470();
    }
    lVar9 = thunk_FUN_0216e89c();
    Dino_BusSand_App_UiAssets___c__DisplayClass18_1_object____ctor_2a2814c
              (lVar9,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x18));
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    plVar14 = (long *)(lVar9 + 0x18);
    *plVar14 = lVar7;
    thunk_FUN_02134474(plVar14,lVar7);
    plVar10 = plStack_68;
    if (lVar11 != 0) {
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar12 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                         (param_1,lVar11,lVar9 + 0x10,*(undefined8 *)puVar4);
      plVar10 = plStack_68;
      if ((uVar12 & 1) != 0) {
        lVar11 = *(long *)puVar3;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar11 = *(long *)puVar3;
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x38);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar12 = System_Collections_Generic_Dictionary_object__object___ContainsKey_34b4598
                           (lVar11,*(undefined8 *)(lVar9 + 0x10),*(undefined8 *)puVar6);
        plVar10 = plStack_68;
        if ((uVar12 & 1) == 0) {
          lVar11 = *(long *)puVar3;
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar11 = *(long *)puVar3;
          }
          lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x70);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar12 = System_Collections_Generic_HashSet_object___Add_37e654c
                             (lVar11,*(undefined8 *)(lVar9 + 0x10),*(undefined8 *)PTR_DAT_04cab7e0);
          plVar10 = plStack_68;
          if ((uVar12 & 1) != 0) {
            lVar11 = *plVar14;
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar15 = *(undefined8 *)(lVar9 + 0x10);
            iVar1 = *(int *)(*(long *)PTR_DAT_04cac348 + 0xe4);
            *(int *)(lVar11 + 0x10) = *(int *)(lVar11 + 0x10) + 1;
            if (iVar1 == 0) {
              thunk_FUN_0218fdac();
            }
            UnityEngine_AddressableAssets_Addressables__LoadAssetAsync_object__263fa74
                      (&uStack_a8,uVar15,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x20));
            uStack_78 = uStack_a0;
            uStack_80 = uStack_a8;
            uStack_70 = uStack_98;
            if ((*(ushort *)(*(long *)(*(long *)(param_3 + 0x38) + 0x38) + 0x135) & 1) == 0) {
              FUN_0216b470();
            }
            uVar15 = thunk_FUN_0216e89c();
            System_Action_AsyncOperationHandle_object_____ctor_34f77ac
                      (uVar15,lVar9,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x30),
                       *(undefined8 *)(*(long *)(param_3 + 0x38) + 0x40));
            UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle_object___add_Completed_304a86c
                      (&uStack_80,uVar15,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x48));
            plVar10 = plStack_68;
          }
        }
      }
    }
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_04ca9b30) {
      puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_02a4773c;
    }
  }
LAB_02a47720:
  puVar8 = (undefined8 *)FUN_0216b7a4(plStack_68,*(long *)PTR_DAT_04ca9b30,0);
LAB_02a4773c:
  (*(code *)*puVar8)(plVar10,puVar8[1]);
LAB_02a47748:
  uVar15 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac8c0);
  System_Func_bool____ctor_379d5fc(uVar15,lVar7,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x58),0)
  ;
  return uVar15;
}

