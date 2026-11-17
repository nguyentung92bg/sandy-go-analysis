/* IL2CPP: Dino.BusSand.Cheat.CheatMobilePanel$$get_Playing
bool Dino_BusSand_Cheat_CheatMobilePanel__get_Playing (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatMobilePanel$$get_Playing
   bool Dino_BusSand_Cheat_CheatMobilePanel__get_Playing (const MethodInfo* method); */

bool Dino_BusSand_Cheat_CheatMobilePanel__get_Playing_23689e8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c790 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c790 = 1;
  }
  uVar3 = Dino_BusSand_Cheat_CheatMobilePanel__get_Gc_2368960();
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar5);
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
  puVar2 = PTR_DAT_04caba50;
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar2;
    }
    lVar6 = *(long *)puVar1;
    uVar3 = **(undefined8 **)(lVar5 + 0xb8);
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar6);
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b88f == '\0') {
        FUN_02132f7c(PTR_DAT_04caba50);
        cRam0000000004f9b88f = '\x01';
      }
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar2;
      }
      if (**(long **)(lVar5 + 0xb8) != 0) {
        if (*(char *)(**(long **)(lVar5 + 0xb8) + 0x38) == '\0') {
          return false;
        }
        lVar5 = Dino_BusSand_Cheat_CheatMobilePanel__get_Gc_2368960();
        if (lVar5 != 0) {
          if (*(int *)(lVar5 + 0x20) == 2) {
            return true;
          }
          lVar5 = Dino_BusSand_Cheat_CheatMobilePanel__get_Gc_2368960();
          if (lVar5 != 0) {
            return *(int *)(lVar5 + 0x20) == 3;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return false;
}

