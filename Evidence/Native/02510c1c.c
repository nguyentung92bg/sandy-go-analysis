/* IL2CPP: Dino.BusSand.Core.LevelData$$<ParseHex>g__H|14_0
uint8_t Dino_BusSand_Core_LevelData___ParseHex_g__H_14_0 (int32_t i, Dino_BusSand_Core_LevelData___c__DisplayClass14_0_o* , const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x048c3204) */
/* IL2CPP: Dino.BusSand.Core.LevelData$$<ParseHex>g__H|14_0
   uint8_t Dino_BusSand_Core_LevelData___ParseHex_g__H_14_0 (int32_t i,
   Dino_BusSand_Core_LevelData___c__DisplayClass14_0_o* , const MethodInfo* method); */

undefined8
Dino_BusSand_Core_LevelData___ParseHex_g__H_14_0_2410c1c(undefined4 param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000004f9cb47 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b88);
    bRam0000000004f9cb47 = 1;
  }
  puVar1 = PTR_DAT_04ca9b88;
  if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar2 = System_String__Substring_46d4848(*param_2,param_1,2,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  if ((bRam0000000004fad32f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b88,0x10,0);
    bRam0000000004fad32f = 1;
  }
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    if (cRam0000000004fa1b52 == '\0') {
      FUN_02132f7c(PTR_DAT_04cc73d8);
      cRam0000000004fa1b52 = '\x01';
    }
    uVar3 = System_String__GetRawStringData_46cfab8(lVar2,0);
    uVar3 = System_ParseNumbers__StringToInt_483ff24
                      (uVar3,*(undefined4 *)(lVar2 + 0x10),0x10,0x1200,0);
    if (0xff < (uint)uVar3) {
      if (*(int *)(*(long *)PTR_DAT_04ca9b88 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* WARNING: Subroutine does not return */
      System_Convert__ThrowByteOverflowException_47bf0ac();
    }
  }
  return uVar3;
}

