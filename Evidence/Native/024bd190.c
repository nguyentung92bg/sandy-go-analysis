/* IL2CPP: Dino.BusSand.View.MaterialLibrary.<>c$$<get_HiddenPaint>b__24_0
UnityEngine_Material_o* Dino_BusSand_View_MaterialLibrary___c___get_HiddenPaint_b__24_0 (Dino_BusSand_View_MaterialLibrary___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MaterialLibrary.<>c$$<get_HiddenPaint>b__24_0
   UnityEngine_Material_o* Dino_BusSand_View_MaterialLibrary___c___get_HiddenPaint_b__24_0
   (Dino_BusSand_View_MaterialLibrary___c_o* __this, const MethodInfo* method); */

long Dino_BusSand_View_MaterialLibrary___c___get_HiddenPaint_b__24_0_23bd190(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04cb6dd0;
  if ((bRam0000000004f9c9a9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04cbca90);
    FUN_02132f7c(PTR_DAT_04cbcaa0);
    FUN_02132f7c(PTR_DAT_04cbcb98);
    bRam0000000004f9c9a9 = 1;
  }
  puVar2 = PTR_DAT_04cbcb98;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_View_MaterialLibrary__LitTemplate_23bab64(*(undefined8 *)puVar2);
  puVar1 = PTR_DAT_04cbcaa0;
  if (lVar3 != 0) {
    UnityEngine_Material__SetColor_43830b0
              (_UNK_00e2098c,_UNK_00e20634,_UNK_00e20114,0x3f800000,lVar3,
               *(undefined8 *)PTR_DAT_04cbca90,0);
    UnityEngine_Material__SetFloat_4383048(_UNK_00e20994,lVar3,*(undefined8 *)puVar1,0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

