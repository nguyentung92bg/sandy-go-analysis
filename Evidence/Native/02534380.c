/* IL2CPP: Dino.BusSand.Sdk.SandBusAdConfig$$.cctor
void Dino_BusSand_Sdk_SandBusAdConfig___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Sdk.SandBusAdConfig$$.cctor
   void Dino_BusSand_Sdk_SandBusAdConfig___cctor (const MethodInfo* method); */

void Dino_BusSand_Sdk_SandBusAdConfig___cctor_2434380(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_04caaae8;
  if ((bRam0000000004f9cc38 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caaae8);
    FUN_02132f7c(PTR_DAT_04cbf1a8);
    FUN_02132f7c(PTR_DAT_04cb1dc0);
    bRam0000000004f9cc38 = 1;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  Dino_Advertisement_AdConfigPayload___ctor_2141f94(lVar3,0);
  puVar2 = PTR_DAT_04cbf1a8;
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)PTR_DAT_04cb1dc0;
    thunk_FUN_02134474();
    uVar1 = _UNK_00e69d90;
    lVar5 = *(long *)puVar2;
    *(undefined8 *)(lVar3 + 0x18) = 0xffffffff;
    *(undefined8 *)(lVar3 + 0x20) = uVar1;
    **(long **)(lVar5 + 0xb8) = lVar3;
    uVar4 = *(ulong *)(*(long *)puVar2 + 0xb8);
    if (iRam00000000051c1b10 != 0) {
      FUN_02220bf0(1L << (uVar4 >> 0xc & 0x3f),(uVar4 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

