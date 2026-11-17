/* IL2CPP: Dino.BusSand.App.UiAssets$$BeginInit
void Dino_BusSand_App_UiAssets__BeginInit (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UiAssets$$BeginInit
   void Dino_BusSand_App_UiAssets__BeginInit (const MethodInfo* method); */

void Dino_BusSand_App_UiAssets__BeginInit_216312c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  puVar2 = PTR_DAT_04cac338;
  puVar1 = PTR_DAT_04cab490;
  if ((bRam0000000004f9b83a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac340);
    FUN_02132f7c(PTR_DAT_04cac348);
    FUN_02132f7c(PTR_DAT_04cac350);
    FUN_02132f7c(PTR_DAT_04cac358);
    FUN_02132f7c(PTR_DAT_04cac338);
    FUN_02132f7c(PTR_DAT_04cab490);
    bRam0000000004f9b83a = 1;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar3,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_UiAssets__Ensure_2162bb4();
  lVar4 = *(long *)puVar1;
  lVar6 = *(long *)(lVar4 + 0xb8);
  if (*(char *)(lVar6 + 0x48) == '\0') {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar1;
      lVar6 = *(long *)(lVar4 + 0xb8);
    }
    if (*(char *)(lVar6 + 0x68) == '\0') {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar6 = *(long *)(*(long *)puVar1 + 0xb8);
      }
      *(undefined1 *)(lVar6 + 0x68) = 1;
      uVar7 = UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
      puVar2 = PTR_DAT_04cac348;
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      *(undefined4 *)(lVar3 + 0x10) = uVar7;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      UnityEngine_AddressableAssets_Addressables__InitializeAsync_408fbe0(&uStack_58,0);
      uStack_38 = uStack_50;
      uStack_40 = uStack_58;
      uStack_30 = uStack_48;
      UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle_object___op_Implicit_3049fac
                (&uStack_70,&uStack_40,*(undefined8 *)PTR_DAT_04cac350);
      lVar4 = *(long *)puVar1;
      lVar6 = *(long *)(lVar4 + 0xb8);
      *(undefined8 *)(lVar6 + 0x58) = uStack_68;
      *(undefined8 *)(lVar6 + 0x50) = uStack_70;
      *(undefined8 *)(lVar6 + 0x60) = uStack_60;
      thunk_FUN_02134474(*(long *)(lVar4 + 0xb8) + 0x50,0);
      uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac340);
      System_Action_AsyncOperationHandle____ctor_35ede54
                (uVar5,lVar3,*(undefined8 *)PTR_DAT_04cac358,0);
      UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle__add_Completed_427fe88
                (*(long *)(*(long *)puVar1 + 0xb8) + 0x50,uVar5,0);
    }
  }
  return;
}

