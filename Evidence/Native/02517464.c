/* IL2CPP: Dino.BusSand.Core.SandGrid$$ApplyTuning
void Dino_BusSand_Core_SandGrid__ApplyTuning (Dino_BusSand_Core_SandGrid_o* __this, Dino_BusSand_Core_SandTuning_o* t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.SandGrid$$ApplyTuning
   void Dino_BusSand_Core_SandGrid__ApplyTuning (Dino_BusSand_Core_SandGrid_o* __this,
   Dino_BusSand_Core_SandTuning_o* t, const MethodInfo* method); */

void Dino_BusSand_Core_SandGrid__ApplyTuning_2417464(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  if (param_2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x68);
    *puVar3 = 0;
    uVar1 = *(undefined4 *)(param_2 + 0x10);
    uVar2 = *(undefined1 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x14);
    uVar5 = *(undefined8 *)(param_2 + 0x24);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    uVar1 = *(undefined4 *)(param_2 + 0x1c);
    *(undefined1 *)(param_1 + 0x28) = uVar2;
    *(undefined8 *)(param_1 + 0x2c) = uVar5;
    uVar4 = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(param_1 + 0x24) = uVar1;
    *(undefined4 *)(param_1 + 0x34) = uVar4;
    if (iRam00000000051c1b10 != 0) {
      FUN_02220bf0(1L << ((ulong)puVar3 >> 0xc & 0x3f),
                   ((ulong)puVar3 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

