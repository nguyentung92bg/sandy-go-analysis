/* IL2CPP: Dino.BusSand.Core.BoardBuilder$$PaletteIndex
int32_t Dino_BusSand_Core_BoardBuilder__PaletteIndex (uint16_t ch, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.BoardBuilder$$PaletteIndex
   int32_t Dino_BusSand_Core_BoardBuilder__PaletteIndex (uint16_t ch, const MethodInfo* method); */

int Dino_BusSand_Core_BoardBuilder__PaletteIndex_240cabc(ushort param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort auStack_14 [2];
  
  iVar2 = -1;
  uVar1 = (uint)param_1;
  if ((uVar1 != 0x20) && (uVar1 != 0x2e)) {
    if (uVar1 - 0x3a < 0xfffffff6) {
      if (uVar1 - 0x7b < 0xffffffe6) {
        if (uVar1 - 0x5b < 0xffffffe6) {
          auStack_14[0] = param_1;
          FUN_01e78ee0(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x88));
          uVar3 = System_Char__ToString_47ac098(auStack_14,0);
          uVar4 = thunk_FUN_021985a8(PTR_DAT_04cbe390);
          uVar3 = System_String__Concat_46c82e0(uVar4,uVar3,0);
          thunk_FUN_021985a8(PTR_DAT_04caa3a8);
          uVar4 = thunk_FUN_0216e89c();
          System_ArgumentException___ctor_47b660c(uVar4,uVar3,0);
          uVar3 = thunk_FUN_021985a8(PTR_DAT_04cbe398);
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar4,uVar3);
        }
        iVar2 = uVar1 - 0x37;
      }
      else {
        iVar2 = uVar1 - 0x57;
      }
    }
    else {
      iVar2 = uVar1 - 0x30;
    }
  }
  return iVar2;
}

