/* IL2CPP: Dino.BusSand.App.Meta.Profile$$SetLevel
void Dino_BusSand_App_Meta_Profile__SetLevel (int32_t n, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Profile$$SetLevel
   void Dino_BusSand_App_Meta_Profile__SetLevel (int32_t n, const MethodInfo* method); */

void Dino_BusSand_App_Meta_Profile__SetLevel_22735a8(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  
  puVar2 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c108 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c108 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  puVar1 = PTR_DAT_04caa200;
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar3 = System_Math__Max_4830fc8(1,param_1,0);
  if (lVar4 != 0) {
    *(undefined4 *)(lVar4 + 0x14) = uVar3;
    Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30();
    lVar4 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
    if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02373690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

