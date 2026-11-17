/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$.cctor
void Dino_BusSand_App_Meta_GameTracking___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$.cctor
   void Dino_BusSand_App_Meta_GameTracking___cctor (const MethodInfo* method); */

void Dino_BusSand_App_Meta_GameTracking___cctor_221b0fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar3 = PTR_DAT_04cb2820;
  puVar2 = PTR_DAT_04cb2818;
  puVar1 = PTR_DAT_04cac498;
  if ((bRam0000000004f9bd82 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cb2820);
    FUN_02132f7c(PTR_DAT_04cb2818);
    bRam0000000004f9bd82 = 1;
  }
  uVar7 = NEON_fmov(0xbf800000,4);
  uVar4 = *(undefined8 *)puVar2;
  lVar6 = *(long *)(*(long *)puVar1 + 0xb8);
  *(undefined4 *)(lVar6 + 0x3c) = 0xbf800000;
  *(undefined8 *)(lVar6 + 0x34) = uVar7;
  *(undefined8 *)(lVar6 + 0x50) = 0xffffffffffffffff;
  *(undefined4 *)(lVar6 + 0x60) = 0xc2c80000;
  uVar4 = thunk_FUN_0216e89c(uVar4);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar4,*(undefined8 *)puVar3);
  puVar5 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x68);
  *puVar5 = uVar4;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar5 >> 0xc & 0x3f),
                 ((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

