/* IL2CPP: Dino.BusSand.Core.LevelData$$ParseHex
UnityEngine_Color32_o Dino_BusSand_Core_LevelData__ParseHex (System_String_o* hex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.LevelData$$ParseHex
   UnityEngine_Color32_o Dino_BusSand_Core_LevelData__ParseHex (System_String_o* hex, const
   MethodInfo* method); */

uint Dino_BusSand_Core_LevelData__ParseHex_2410b28(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  thunk_FUN_02134474(&uStack_18,param_1);
  uVar1 = Dino_BusSand_Core_LevelData___ParseHex_g__H_14_0_2410c1c(0,&uStack_18);
  uVar2 = Dino_BusSand_Core_LevelData___ParseHex_g__H_14_0_2410c1c(2,&uStack_18);
  iVar3 = Dino_BusSand_Core_LevelData___ParseHex_g__H_14_0_2410c1c(4,&uStack_18);
  return (uVar2 & 0xff) << 8 | iVar3 << 0x10 | uVar1 & 0xff | 0xff000000;
}

