/* IL2CPP: Dino.BusSand.App.UiAssets$$Prefab
UnityEngine_GameObject_o* Dino_BusSand_App_UiAssets__Prefab (System_String_o* key, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UiAssets$$Prefab
   UnityEngine_GameObject_o* Dino_BusSand_App_UiAssets__Prefab (System_String_o* key, const
   MethodInfo* method); */

undefined8 Dino_BusSand_App_UiAssets__Prefab_21513b8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if ((bRam0000000004f9b83f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cab4f0);
                    /* try { // try from 022513f4 to 023514e3 has its CatchHandler @ 02251678 */
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cab4f8);
    bRam0000000004f9b83f = 1;
  }
  uVar4 = System_String__IsNullOrEmpty_46d2084(param_1,0);
  puVar3 = PTR_DAT_04cab4f0;
  puVar2 = PTR_DAT_04cab490;
  puVar1 = PTR_DAT_04ca9ae8;
  uVar5 = 0;
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_UiAssets__Ensure_2162bb4();
    uVar5 = Dino_BusSand_App_UiAssets__Load_object__2946ec8
                      (*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8),param_1,
                       *(undefined8 *)puVar3);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UiAssets__Miss_21633cc(*(undefined8 *)PTR_DAT_04cab4f8,param_1);
    }
  }
  return uVar5;
}

