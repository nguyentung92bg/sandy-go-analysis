/* IL2CPP: Dino.BusSand.View.PackPalette$$SwatchName
System_String_o* Dino_BusSand_View_PackPalette__SwatchName (uint8_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.PackPalette$$SwatchName
   System_String_o* Dino_BusSand_View_PackPalette__SwatchName (uint8_t id, const MethodInfo*
   method); */

undefined8 Dino_BusSand_View_PackPalette__SwatchName_238fd98(ulong param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((bRam0000000004f9c8bb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb70d8);
    bRam0000000004f9c8bb = 1;
  }
  puVar2 = PTR_DAT_04cb70d8;
  if (((uint)param_1 & 0xff) < 0x41) {
    lVar3 = *(long *)PTR_DAT_04cb70d8;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar2;
    }
    lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x18);
    if (lVar5 == 0) {
LAB_0248fe50:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar1 = (uint)param_1 & 0xff;
    if (*(uint *)(lVar5 + 0x18) <= uVar1) {
LAB_0248fe84:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    if (*(long *)(lVar5 + (param_1 & 0xff) * 8 + 0x20) == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar3 = Dino_BusSand_View_PackPalette__Nearest_238fa7c(param_1 & 0xffffffff);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
        if (lVar5 == 0) goto LAB_0248fe50;
      }
                    /* try { // try from 0248fe3c to 02590253 has its CatchHandler @ 0248fe3c
                       catch() { ... } // from try @ 0248fe3c with catch @ 0248fe3c
                       catch() { ... } // from try @ 02490318 with catch @ 0248fe3c
                       catch() { ... } // from try @ 02490820 with catch @ 0248fe3c
                       catch() { ... } // from try @ 02490870 with catch @ 0248fe3c
                       catch() { ... } // from try @ 0249089c with catch @ 0248fe3c */
      if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_0248fe84;
      lVar3 = *(long *)(lVar5 + (param_1 & 0xff) * 8 + 0x20);
      if (lVar3 == 0) goto LAB_0248fe50;
    }
    uVar4 = *(undefined8 *)(lVar3 + 0x10);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

