/* IL2CPP: Dino.BusSand.Core.BoardBuilder$$NextShade
int8_t Dino_BusSand_Core_BoardBuilder__NextShade (Dino_BusSand_Core_SandRandom_o* rng, Dino_BusSand_Core_SandTuning_o* t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.BoardBuilder$$NextShade
   int8_t Dino_BusSand_Core_BoardBuilder__NextShade (Dino_BusSand_Core_SandRandom_o* rng,
   Dino_BusSand_Core_SandTuning_o* t, const MethodInfo* method); */

int Dino_BusSand_Core_BoardBuilder__NextShade_240cb9c(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  
  uVar2 = Dino_BusSand_Core_SandRandom__NextUInt_24170e4(param_1,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (uVar2 % 100 < *(uint *)(param_2 + 0x30)) {
    iVar6 = *(int *)(param_2 + 0x34);
    uVar2 = *(int *)(param_2 + 0x38) - iVar6;
    if (uVar2 < 0x7fffffff) {
      uVar2 = uVar2 + 1;
      uVar3 = Dino_BusSand_Core_SandRandom__NextUInt_24170e4(param_1,0);
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar3 / uVar2;
      }
      iVar6 = (uVar3 - uVar1 * uVar2) + iVar6;
    }
    uVar5 = Dino_BusSand_Core_SandRandom__NextBool_2417108(param_1,0);
    iVar4 = -iVar6;
    if ((uVar5 & 1) != 0) {
      iVar4 = iVar6;
    }
  }
  else {
    iVar4 = 0;
  }
  return iVar4;
}

