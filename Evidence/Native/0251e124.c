/* IL2CPP: Dino.BusSand.Core.SimProfiler$$.cctor
void Dino_BusSand_Core_SimProfiler___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.SimProfiler$$.cctor
   void Dino_BusSand_Core_SimProfiler___cctor (const MethodInfo* method); */

void Dino_BusSand_Core_SimProfiler___cctor_241e124(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar1 = PTR_DAT_04caa038;
  if ((bRam0000000004f9cb92 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5598);
    FUN_02132f7c(PTR_DAT_04cbea80);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cbea90);
    FUN_02132f7c(PTR_DAT_04cbea98);
    FUN_02132f7c(PTR_DAT_04cbeaa0);
    FUN_02132f7c(PTR_DAT_04cbeaa8);
    FUN_02132f7c(PTR_DAT_04cbeab0);
    FUN_02132f7c(PTR_DAT_04cbeab8);
    FUN_02132f7c(PTR_DAT_04cbeac0);
    FUN_02132f7c(PTR_DAT_04cbeac8);
    bRam0000000004f9cb92 = 1;
  }
  lVar3 = FUN_02133068(*(undefined8 *)puVar1,8);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)PTR_DAT_04cbeab0;
      thunk_FUN_02134474((undefined8 *)(lVar3 + 0x20));
      if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)PTR_DAT_04cbeaa0;
        thunk_FUN_02134474((undefined8 *)(lVar3 + 0x28));
        if (2 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)PTR_DAT_04cbea90;
          thunk_FUN_02134474((undefined8 *)(lVar3 + 0x30));
          if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)PTR_DAT_04cbeab8;
            thunk_FUN_02134474((undefined8 *)(lVar3 + 0x38));
            if (4 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)PTR_DAT_04cbeac8;
              thunk_FUN_02134474((undefined8 *)(lVar3 + 0x40));
              if (5 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)PTR_DAT_04cbeaa8;
                thunk_FUN_02134474((undefined8 *)(lVar3 + 0x48));
                if (6 < *(uint *)(lVar3 + 0x18)) {
                  *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)PTR_DAT_04cbeac0;
                  thunk_FUN_02134474((undefined8 *)(lVar3 + 0x50));
                  puVar1 = PTR_DAT_04cbea80;
                  if ((*(uint *)(lVar3 + 0x18) & 0xfffffff8) != 0) {
                    *(undefined8 *)(lVar3 + 0x58) = *(undefined8 *)PTR_DAT_04cbea98;
                    thunk_FUN_02134474();
                    **(long **)(*(long *)puVar1 + 0xb8) = lVar3;
                    thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar1 + 0xb8),lVar3);
                    puVar2 = PTR_DAT_04cb5598;
                    if (**(long **)(*(long *)puVar1 + 0xb8) != 0) {
                      uVar4 = FUN_02133068(*(undefined8 *)PTR_DAT_04cb5598,
                                           *(undefined4 *)
                                            (**(long **)(*(long *)puVar1 + 0xb8) + 0x18));
                      puVar5 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
                      *puVar5 = uVar4;
                      thunk_FUN_02134474(puVar5,uVar4);
                      if (**(long **)(*(long *)puVar1 + 0xb8) != 0) {
                        uVar4 = FUN_02133068(*(undefined8 *)puVar2,
                                             *(undefined4 *)
                                              (**(long **)(*(long *)puVar1 + 0xb8) + 0x18));
                        puVar5 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
                        *puVar5 = uVar4;
                        thunk_FUN_02134474(puVar5,uVar4);
                        uVar4 = FUN_02133068(*(undefined8 *)puVar2,4);
                        puVar5 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
                        *puVar5 = uVar4;
                        if (iRam00000000051c1b10 != 0) {
                          FUN_02220bf0(1L << ((ulong)puVar5 >> 0xc & 0x3f),
                                       ((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
                        }
                        return;
                      }
                    }
                    goto LAB_0251e3dc;
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
LAB_0251e3dc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

