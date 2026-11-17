/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyDecoder.LevelOp$$.cctor
void Dino_BusSand_App_Meta_Journey_JourneyDecoder_LevelOp___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyDecoder.LevelOp$$.cctor
   void Dino_BusSand_App_Meta_Journey_JourneyDecoder_LevelOp___cctor (const MethodInfo* method); */

void Dino_BusSand_App_Meta_Journey_JourneyDecoder_LevelOp___cctor_2297ba4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  puVar2 = PTR_DAT_04cb5598;
  puVar1 = PTR_DAT_04cb5508;
  if ((bRam0000000004f9c207 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5598);
    FUN_02132f7c(PTR_DAT_04cb5508);
    bRam0000000004f9c207 = 1;
  }
  uVar3 = FUN_02133068(*(undefined8 *)puVar2,0);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar3;
  uVar4 = *(ulong *)(*(long *)puVar1 + 0xb8);
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (uVar4 >> 0xc & 0x3f),(uVar4 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

