/* IL2CPP: Dino.BusSand.View.MaterialLibrary.<>c$$<get_GlassEmpty>b__27_0
UnityEngine_Material_o* Dino_BusSand_View_MaterialLibrary___c___get_GlassEmpty_b__27_0 (Dino_BusSand_View_MaterialLibrary___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MaterialLibrary.<>c$$<get_GlassEmpty>b__27_0
   UnityEngine_Material_o* Dino_BusSand_View_MaterialLibrary___c___get_GlassEmpty_b__27_0
   (Dino_BusSand_View_MaterialLibrary___c_o* __this, const MethodInfo* method); */

long Dino_BusSand_View_MaterialLibrary___c___get_GlassEmpty_b__27_0_23bd270(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_04cab208;
  if ((bRam0000000004f9c9aa & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cab588);
    FUN_02132f7c(PTR_DAT_04cbcbc8);
    FUN_02132f7c(PTR_DAT_04caa120);
    bRam0000000004f9c9aa = 1;
  }
  puVar3 = PTR_DAT_04cbcbc8;
  puVar2 = PTR_DAT_04cab588;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = Dino_BusSand_GameAssets__FindShader_237d610(*(undefined8 *)puVar3,0);
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  UnityEngine_Material___ctor_437b5a8(lVar5,uVar4,0);
  puVar1 = PTR_DAT_04caa120;
  if (lVar5 != 0) {
    UnityEngine_Material__set_enableInstancing_437dbe4(lVar5,1,0);
    UnityEngine_Material__SetFloat_4383048(0,lVar5,*(undefined8 *)puVar1,0);
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

