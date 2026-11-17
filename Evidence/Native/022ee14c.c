/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$.cctor
void Dino_BusSand_App_UI_YachtRacingPanel___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$.cctor
   void Dino_BusSand_App_UI_YachtRacingPanel___cctor (const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingPanel___cctor_21ee14c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  
  puVar2 = PTR_DAT_04cb10f0;
  puVar1 = PTR_DAT_04caa038;
  if ((bRam0000000004f9bc07 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa038);
                    /* catch() { ... } // from try @ 022ee114 with catch @ 022ee17c */
    FUN_02132f7c(PTR_DAT_04cb10f0);
    FUN_02132f7c(PTR_DAT_04cb1270);
    FUN_02132f7c(PTR_DAT_04cb1278);
                    /* try { // try from 022ee1a8 to 023ee257 has its CatchHandler @ 022ee1a8
                       catch() { ... } // from try @ 022ee1a8 with catch @ 022ee1a8
                       catch() { ... } // from try @ 022ee260 with catch @ 022ee1a8 */
    FUN_02132f7c(PTR_DAT_04cb1280);
    FUN_02132f7c(PTR_DAT_04cb1288);
    FUN_02132f7c(PTR_DAT_04cb1290);
    bRam0000000004f9bc07 = 1;
  }
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = _UNK_00e69b38;
  lVar3 = FUN_02133068(*(undefined8 *)puVar1,5);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)PTR_DAT_04cb1288;
      thunk_FUN_02134474((undefined8 *)(lVar3 + 0x20));
      if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)PTR_DAT_04cb1290;
        thunk_FUN_02134474((undefined8 *)(lVar3 + 0x28));
        if (2 < *(uint *)(lVar3 + 0x18)) {
                    /* try { // try from 022ee258 to 023ee25f has its CatchHandler @ 022ee2c0 */
          *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)PTR_DAT_04cb1270;
                    /* try { // try from 022ee260 to 023ee2eb has its CatchHandler @ 022ee1a8 */
          thunk_FUN_02134474((undefined8 *)(lVar3 + 0x30));
          if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)PTR_DAT_04cb1280;
            thunk_FUN_02134474((undefined8 *)(lVar3 + 0x38));
            if (4 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)PTR_DAT_04cb1278;
              thunk_FUN_02134474();
                    /* catch() { ... } // from try @ 022ee258 with catch @ 022ee2c0 */
              plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
              *plVar4 = lVar3;
              if (iRam00000000051c1b10 != 0) {
                FUN_02220bf0(1L << ((ulong)plVar4 >> 0xc & 0x3f),
                             ((ulong)plVar4 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
              }
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

