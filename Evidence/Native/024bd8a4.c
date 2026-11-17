/* IL2CPP: Dino.BusSand.View.MaterialLibrary.<>c__DisplayClass17_0$$<Toonish>b__0
UnityEngine_Material_o* Dino_BusSand_View_MaterialLibrary___c__DisplayClass17_0___Toonish_b__0 (Dino_BusSand_View_MaterialLibrary___c__DisplayClass17_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MaterialLibrary.<>c__DisplayClass17_0$$<Toonish>b__0
   UnityEngine_Material_o* Dino_BusSand_View_MaterialLibrary___c__DisplayClass17_0___Toonish_b__0
   (Dino_BusSand_View_MaterialLibrary___c__DisplayClass17_0_o* __this, const MethodInfo* method); */

long Dino_BusSand_View_MaterialLibrary___c__DisplayClass17_0___Toonish_b__0_23bd8a4(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  
  puVar3 = PTR_DAT_04cb6dd0;
  if ((bRam0000000004f9c9ae & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04cab588);
    FUN_02132f7c(PTR_DAT_04cbca78);
    FUN_02132f7c(PTR_DAT_04cbca88);
    FUN_02132f7c(PTR_DAT_04cb68b8);
    FUN_02132f7c(PTR_DAT_04cbca98);
    FUN_02132f7c(PTR_DAT_04cbcaa0);
    FUN_02132f7c(PTR_DAT_04cbcab0);
    FUN_02132f7c(PTR_DAT_04cbcac0);
    FUN_02132f7c(PTR_DAT_04cbcad8);
    bRam0000000004f9c9ae = 1;
  }
  puVar2 = PTR_DAT_04cab588;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = Dino_BusSand_View_MaterialLibrary__get_Toon_23b96f4();
  lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  UnityEngine_Material___ctor_437b5a8(lVar10,uVar9,0);
  puVar8 = PTR_DAT_04cbcad8;
  puVar7 = PTR_DAT_04cbcac0;
  puVar6 = PTR_DAT_04cbcab0;
  puVar5 = PTR_DAT_04cbcaa0;
  puVar4 = PTR_DAT_04cbca98;
  puVar2 = PTR_DAT_04cbca88;
  puVar3 = PTR_DAT_04cbca78;
  if (lVar10 != 0) {
    UnityEngine_Material__SetColor_43830b0
              (*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
               *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),lVar10,
               *(undefined8 *)PTR_DAT_04cb68b8,0);
    UnityEngine_Material__SetColor_43830b0
              (_UNK_00e1fe38,_UNK_00e1fde8,_UNK_00e20830,0x3f800000,lVar10,*(undefined8 *)puVar6,0);
    uVar1 = _UNK_00e20994;
    UnityEngine_Material__SetFloat_4383048(_UNK_00e20994,lVar10,*(undefined8 *)puVar7,0);
    UnityEngine_Material__SetFloat_4383048(_UNK_00e208e8,lVar10,*(undefined8 *)puVar8,0);
    UnityEngine_Material__SetFloat_4383048(_UNK_00e208cc,lVar10,*(undefined8 *)puVar2,0);
    UnityEngine_Material__SetFloat_4383048
              (*(undefined4 *)(param_1 + 0x20),lVar10,*(undefined8 *)puVar4,0);
    UnityEngine_Material__SetFloat_4383048(uVar1,lVar10,*(undefined8 *)puVar5,0);
    UnityEngine_Material__SetFloat_4383048(_UNK_00e201f4,lVar10,*(undefined8 *)puVar3,0);
    return lVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

