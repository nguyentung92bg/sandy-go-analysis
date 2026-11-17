/* IL2CPP: Dino.BusSand.App.UI.KitPrefabs$$Get
Dino_BusSand_App_UI_KitPrefabs_Template_o* Dino_BusSand_App_UI_KitPrefabs__Get (System_String_o* key, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitPrefabs$$Get
   Dino_BusSand_App_UI_KitPrefabs_Template_o* Dino_BusSand_App_UI_KitPrefabs__Get (System_String_o*
   key, const MethodInfo* method); */

long Dino_BusSand_App_UI_KitPrefabs__Get_2181940(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lStack_28;
  
  puVar1 = PTR_DAT_04cac4f8;
  if ((bRam0000000004f9b933 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cad5e0);
    FUN_02132f7c(PTR_DAT_04cad5e8);
    FUN_02132f7c(PTR_DAT_04cad5f0);
    FUN_02132f7c(PTR_DAT_04cac4f8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad5f8);
    FUN_02132f7c(PTR_DAT_04cad600);
    bRam0000000004f9b933 = 1;
  }
  lStack_28 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = Dino_BusSand_App_UI_KitPrefabs__Has_218177c(param_1);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar1;
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
  if (lVar4 != 0) {
    uVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                      (lVar4,param_1,&lStack_28,*(undefined8 *)PTR_DAT_04cad5e0);
    if ((uVar3 & 1) != 0) {
      if (lStack_28 == 0) {
        return 0;
      }
      uVar5 = *(undefined8 *)(lStack_28 + 0x18);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
      if ((uVar3 & 1) != 0) {
        return lStack_28;
      }
    }
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar1;
    }
    puVar2 = PTR_DAT_04cad5e8;
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    if (lVar4 != 0) {
      uVar5 = System_Collections_Generic_Dictionary_object__object___get_Item_34b4324
                        (lVar4,param_1,*(undefined8 *)PTR_DAT_04cad5e8);
      uVar5 = UnityEngine_Resources__Load_object__2891e2c(uVar5,*(undefined8 *)PTR_DAT_04cad5f8);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
      }
      uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
      lVar4 = *(long *)puVar1;
      if ((uVar3 & 1) == 0) {
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lStack_28 = Dino_BusSand_App_UI_KitPrefabs__Prepare_21822a4(param_1,uVar5);
        lVar4 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
        if (lVar4 != 0) {
          System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                    (lVar4,param_1,lStack_28,*(undefined8 *)PTR_DAT_04cad5f0);
          return lStack_28;
        }
      }
      else {
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar4 = *(long *)puVar1;
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
        if (lVar4 != 0) {
          uVar5 = System_Collections_Generic_Dictionary_object__object___get_Item_34b4324
                            (lVar4,param_1,*(undefined8 *)puVar2);
          uVar5 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cad600,uVar5,0);
          if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
          }
          UnityEngine_Debug__LogWarning_4357a30(uVar5,0);
          lVar4 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
          if (lVar4 != 0) {
            System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                      (lVar4,param_1,0,*(undefined8 *)PTR_DAT_04cad5f0);
            return 0;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

