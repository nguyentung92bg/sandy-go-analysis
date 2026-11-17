/* IL2CPP: Dino.BusSand.Cheat.CheatUiHider$$.cctor
void Dino_BusSand_Cheat_CheatUiHider___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatUiHider$$.cctor
   void Dino_BusSand_Cheat_CheatUiHider___cctor (const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatUiHider___cctor_236f688(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  
  puVar2 = PTR_DAT_04cbaa00;
  puVar1 = PTR_DAT_04caa038;
  if ((bRam0000000004f9c7c3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbaa00);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cbafb8);
    FUN_02132f7c(PTR_DAT_04cbafc0);
    bRam0000000004f9c7c3 = 1;
  }
  uVar3 = FUN_02133068(*(undefined8 *)puVar1,0);
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar3;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar3);
  lVar4 = FUN_02133068(*(undefined8 *)puVar1,2);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) != 0) {
      *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)PTR_DAT_04cbafb8;
      thunk_FUN_02134474((undefined8 *)(lVar4 + 0x20));
      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)PTR_DAT_04cbafc0;
        thunk_FUN_02134474();
        plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
        *plVar5 = lVar4;
        if (iRam00000000051c1b10 != 0) {
          FUN_02220bf0(1L << ((ulong)plVar5 >> 0xc & 0x3f),
                       ((ulong)plVar5 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
        }
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

