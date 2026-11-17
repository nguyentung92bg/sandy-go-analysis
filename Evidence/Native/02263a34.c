/* IL2CPP: Dino.BusSand.App.UiAssets$$Texture
UnityEngine_Texture_o* Dino_BusSand_App_UiAssets__Texture (System_String_o* key, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UiAssets$$Texture
   UnityEngine_Texture_o* Dino_BusSand_App_UiAssets__Texture (System_String_o* key, const
   MethodInfo* method); */

undefined8 Dino_BusSand_App_UiAssets__Texture_2163a34(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
                    /* catch() { ... } // from try @ 0226394c with catch @ 02263a40 */
  if ((bRam0000000004f9b844 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac3a0);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cac3a8);
    bRam0000000004f9b844 = 1;
  }
  uVar4 = System_String__IsNullOrEmpty_46d2084(param_1,0);
  puVar3 = PTR_DAT_04cac3a0;
  puVar2 = PTR_DAT_04cab490;
  puVar1 = PTR_DAT_04ca9ae8;
  uVar5 = 0;
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_UiAssets__Ensure_2162bb4();
    uVar5 = Dino_BusSand_App_UiAssets__Load_object__2946ec8
                      (*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28),param_1,
                       *(undefined8 *)puVar3);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UiAssets__Miss_21633cc(*(undefined8 *)PTR_DAT_04cac3a8,param_1);
    }
  }
                    /* try { // try from 02263b38 to 02363c17 has its CatchHandler @ 02263b38
                       catch() { ... } // from try @ 02263b38 with catch @ 02263b38
                       catch() { ... } // from try @ 02263c60 with catch @ 02263b38 */
  return uVar5;
}

