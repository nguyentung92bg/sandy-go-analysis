/* IL2CPP: Dino.BusSand.View.EndSuctionCue$$Create
Dino_BusSand_View_EndSuctionCue_o* Dino_BusSand_View_EndSuctionCue__Create (UnityEngine_Transform_o* parent, Dino_BusSand_View_StageLayout_o* layout, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.EndSuctionCue$$Create
   Dino_BusSand_View_EndSuctionCue_o* Dino_BusSand_View_EndSuctionCue__Create
   (UnityEngine_Transform_o* parent, Dino_BusSand_View_StageLayout_o* layout, const MethodInfo*
   method); */

undefined8 Dino_BusSand_View_EndSuctionCue__Create_2395d9c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_04cab208;
  if ((bRam0000000004f9c8db & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc148);
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb7298);
    bRam0000000004f9c8db = 1;
  }
  puVar2 = PTR_DAT_04cb7298;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = Dino_BusSand_GameAssets__FindShader_237d610(*(undefined8 *)puVar2,0);
  puVar1 = PTR_DAT_04ca9ae8;
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
    uVar5 = 0;
    if ((uVar4 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar3,0,0);
      uVar5 = 0;
      if ((uVar4 & 1) == 0) {
        uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbc148);
        Dino_BusSand_View_EndSuctionCue___ctor_2395964(uVar5,param_1,param_2,uVar3);
      }
    }
  }
  return uVar5;
}

