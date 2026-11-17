/* IL2CPP: Dino.BusSand.Core.BusGeometry$$.cctor
void Dino_BusSand_Core_BusGeometry___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Core.BusGeometry$$.cctor
   void Dino_BusSand_Core_BusGeometry___cctor (const MethodInfo* method); */

void Dino_BusSand_Core_BusGeometry___cctor_242bc30(void)

{
  double dVar1;
  double dVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  double dVar11;
  
  puVar5 = PTR_DAT_04cbc080;
  puVar4 = PTR_DAT_04cbbff8;
  if ((bRam0000000004f9cbc7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc080);
    FUN_02132f7c(PTR_DAT_04cbbff8);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9cbc7 = 1;
  }
  puVar3 = PTR_DAT_04caa200;
  uVar6 = FUN_02133068(*(undefined8 *)puVar4,0x18);
  **(undefined8 **)(*(long *)puVar5 + 0xb8) = uVar6;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar5 + 0xb8),uVar6);
  uVar6 = FUN_02133068(*(undefined8 *)puVar4,0x18);
  puVar7 = (undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
  *puVar7 = uVar6;
  thunk_FUN_02134474(puVar7,uVar6);
  dVar2 = _UNK_00e6a980;
  dVar1 = _UNK_00e6a408;
  uVar9 = 0;
  while( true ) {
    lVar10 = **(long **)(*(long *)puVar5 + 0xb8);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    dVar11 = ((double)(int)uVar9 * 15.0 * dVar2) / dVar1;
    uVar6 = FUN_049b5370(dVar11);
    if (cRam0000000004f9b890 == '\0') {
      FUN_02132f7c(puVar3);
      cRam0000000004f9b890 = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = System_Math__Round_48312e4(uVar6,0xf,0,0);
    if (lVar10 == 0) break;
    if (*(uint *)(lVar10 + 0x18) <= uVar9) {
LAB_0252be28:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    lVar8 = *(long *)puVar5;
    *(undefined8 *)(lVar10 + uVar9 * 8 + 0x20) = uVar6;
    lVar10 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
    uVar6 = FUN_049b5390(dVar11);
    if (cRam0000000004f9b890 == '\0') {
      FUN_02132f7c(puVar3);
      cRam0000000004f9b890 = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = System_Math__Round_48312e4(uVar6,0xf,0,0);
    if (lVar10 == 0) break;
    if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_0252be28;
    lVar8 = uVar9 * 8;
    uVar9 = uVar9 + 1;
    *(undefined8 *)(lVar10 + lVar8 + 0x20) = uVar6;
    if (uVar9 == 0x18) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

