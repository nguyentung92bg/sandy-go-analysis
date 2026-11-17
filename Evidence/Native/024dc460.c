/* IL2CPP: Dino.BusSand.View.PicturePaper$$NewMaterial
UnityEngine_Material_o* Dino_BusSand_View_PicturePaper__NewMaterial (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.PicturePaper$$NewMaterial
   UnityEngine_Material_o* Dino_BusSand_View_PicturePaper__NewMaterial (const MethodInfo* method);
    */

long Dino_BusSand_View_PicturePaper__NewMaterial_23dc460(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_04cab208;
  if ((bRam0000000004f9ca43 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cab588);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbc398);
    FUN_02132f7c(PTR_DAT_04cbd7e0);
    FUN_02132f7c(PTR_DAT_04cbd890);
    FUN_02132f7c(PTR_DAT_04cbd898);
    bRam0000000004f9ca43 = 1;
  }
  puVar3 = PTR_DAT_04cbd890;
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = Dino_BusSand_GameAssets__FindShader_237d610(*(undefined8 *)puVar3,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
  lVar6 = 0;
  if ((uVar5 & 1) == 0) {
    lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab588);
    UnityEngine_Material___ctor_437b5a8(lVar6,uVar4,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_Object__set_name_43c72ec(lVar6,*(undefined8 *)PTR_DAT_04cbd898,0);
    if (*(int *)(*(long *)PTR_DAT_04cbc398 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = Dino_BusSand_View_PaintingLayer__Noise_23d9848();
    UnityEngine_Material__SetTexture_43831cc(lVar6,*(undefined8 *)PTR_DAT_04cbd7e0,uVar4,0);
  }
  return lVar6;
}

