/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings$$CrashKey
void Dino_BusSand_App_Meta_EconomySettings__CrashKey (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings$$CrashKey
   void Dino_BusSand_App_Meta_EconomySettings__CrashKey (const MethodInfo* method); */

void Dino_BusSand_App_Meta_EconomySettings__CrashKey_2205bc0(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_04cb1d58;
  if ((bRam0000000004f9bcd7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac450);
    FUN_02132f7c(PTR_DAT_04cb1d58);
    FUN_02132f7c(PTR_DAT_04cb1da0);
    bRam0000000004f9bcd7 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9bcfe == '\0') {
    FUN_02132f7c(PTR_DAT_04cb1d58);
    cRam0000000004f9bcfe = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  uVar3 = **(undefined8 **)(lVar2 + 0xb8);
  if (*(int *)(*(long *)PTR_DAT_04cac450 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac450);
  }
  Dino_BusSand_App_CrashContext__Key_216f9dc(*(undefined8 *)PTR_DAT_04cb1da0,uVar3,0);
  return;
}

