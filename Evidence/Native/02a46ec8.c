/* IL2CPP: Dino.BusSand.App.UiAssets$$Load<object>
Il2CppObject* Dino_BusSand_App_UiAssets__Load_object_ (System_Collections_Generic_Dictionary_string__string__o* table, System_String_o* name, const MethodInfo_2946EC8* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UiAssets$$Load<object>
   Il2CppObject* Dino_BusSand_App_UiAssets__Load_object_
   (System_Collections_Generic_Dictionary_string__string__o* table, System_String_o* name, const
   MethodInfo_2946EC8* method); */

undefined8
Dino_BusSand_App_UiAssets__Load_object__2946ec8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_02132f7c(PTR_DAT_04cac348);
    FUN_02132f7c(PTR_DAT_04cac350);
    FUN_02132f7c(PTR_DAT_04cab240);
    FUN_02132f7c(PTR_DAT_04cc52c0);
    FUN_02132f7c(PTR_DAT_04cab608);
    FUN_02132f7c(PTR_DAT_04cc52c8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cc52d0);
    FUN_02132f7c(PTR_DAT_04cc52d8);
    if (*(long *)(param_3 + 0x38) == 0) {
      FUN_0216b4cc(param_3);
    }
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  if (param_1 != 0) {
    uVar5 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                      (param_1,param_2,&uStack_68,*(undefined8 *)PTR_DAT_04cab608);
    puVar2 = PTR_DAT_04cab490;
    if ((uVar5 & 1) == 0) {
      uVar7 = 0;
    }
    else {
      lVar6 = *(long *)PTR_DAT_04cab490;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar6 = *(long *)puVar2;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x38);
      if (lVar6 == 0) goto LAB_02a4730c;
      uVar5 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                        (lVar6,uStack_68,&uStack_70,*(undefined8 *)PTR_DAT_04cc52c0);
      uVar7 = uStack_70;
      if ((uVar5 & 1) == 0) {
        fVar11 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
        lVar6 = *(long *)puVar2;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar6 = *(long *)puVar2;
        }
        puVar3 = PTR_DAT_04cac348;
        puVar1 = PTR_DAT_04cab240;
        lVar10 = *(long *)(lVar6 + 0xb8);
        if (*(char *)(lVar10 + 0x48) == '\0') {
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar6 = *(long *)puVar2;
            lVar10 = *(long *)(lVar6 + 0xb8);
          }
          if (*(char *)(lVar10 + 0x68) == '\0') {
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            UnityEngine_AddressableAssets_Addressables__InitializeAsync_408fbe0(&uStack_e8,0);
            uStack_58 = uStack_e0;
            uStack_60 = uStack_e8;
            uStack_50 = uStack_d8;
            UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle_object___op_Implicit_3049fac
                      (&uStack_d0,&uStack_60,*(undefined8 *)PTR_DAT_04cac350);
          }
          else {
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar10 = *(long *)(*(long *)puVar2 + 0xb8);
            }
            uStack_c8 = *(undefined8 *)(lVar10 + 0x58);
            uStack_d0 = *(undefined8 *)(lVar10 + 0x50);
            uStack_c0 = *(undefined8 *)(lVar10 + 0x60);
          }
          uStack_a8 = uStack_c8;
          uStack_b0 = uStack_d0;
          uStack_a0 = uStack_c0;
          UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle__WaitForCompletion_4296c1c
                    (&uStack_b0,0);
          lVar6 = *(long *)puVar2;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar6 = *(long *)puVar2;
          }
          *(undefined1 *)(*(long *)(lVar6 + 0xb8) + 0x48) = 1;
          fVar12 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_BootTrace__Took_214e544
                    ((fVar12 - fVar11) * 1000.0,*(undefined8 *)PTR_DAT_04cc52d8,0);
          fVar11 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
        }
        uVar7 = uStack_68;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        UnityEngine_AddressableAssets_Addressables__LoadAssetAsync_object__263fa74
                  (&uStack_60,uVar7,*(undefined8 *)(*(long *)(param_3 + 0x38) + 8));
        uStack_88 = uStack_58;
        uStack_90 = uStack_60;
        uStack_80 = uStack_50;
        uVar8 = UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle_object___WaitForCompletion_304af5c
                          (&uStack_90,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x18));
        uVar7 = *(undefined8 *)(*(long *)(param_3 + 0x38) + 0x28);
        if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
        }
        plVar9 = (long *)System_Type__GetTypeFromHandle_483f0b4(uVar7,0);
        if (plVar9 == (long *)0x0) goto LAB_02a4730c;
        uVar7 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
        uVar7 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cc52d0,uVar7,0);
        fVar12 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_BootTrace__Sum_214e5a8((fVar12 - fVar11) * 1000.0,uVar7,0);
        iVar4 = UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle_object___get_Status_304b488
                          (&uStack_90,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x30));
        uVar7 = 0;
        if (iVar4 == 1) {
          if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
          uVar7 = 0;
          if ((uVar5 & 1) == 0) {
            lVar6 = *(long *)puVar2;
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x38);
            if (lVar6 == 0) goto LAB_02a4730c;
            System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                      (lVar6,uStack_68,uVar8,*(undefined8 *)PTR_DAT_04cc52c8);
            uVar7 = uVar8;
          }
        }
      }
      else {
        lVar6 = **(long **)(param_3 + 0x38);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0216b470(lVar6);
        }
        uVar7 = thunk_FUN_0216e7a0(uVar7,lVar6);
      }
    }
    return uVar7;
  }
LAB_02a4730c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

