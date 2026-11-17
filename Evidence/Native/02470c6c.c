/* IL2CPP: Dino.BusSand.Cheat.QaJourney$$.cctor
void Dino_BusSand_Cheat_QaJourney___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.QaJourney$$.cctor
   void Dino_BusSand_Cheat_QaJourney___cctor (const MethodInfo* method); */

void Dino_BusSand_Cheat_QaJourney___cctor_2370c6c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  puVar2 = PTR_DAT_04cab800;
  puVar1 = PTR_DAT_04cab7f0;
                    /* try { // try from 02470c78 to 02570c8f has its CatchHandler @ 02470d60 */
                    /* try { // try from 02470c90 to 02570d4b has its CatchHandler @ 02470a5c */
  if ((bRam0000000004f9c7d3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbb030);
    FUN_02132f7c(PTR_DAT_04cbb028);
    FUN_02132f7c(PTR_DAT_04cab7e0);
    FUN_02132f7c(PTR_DAT_04cab7f0);
    FUN_02132f7c(PTR_DAT_04cab800);
    FUN_02132f7c(PTR_DAT_04cbafc8);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cb9760);
    FUN_02132f7c(PTR_DAT_04cad4d0);
    FUN_02132f7c(PTR_DAT_04caf588);
    FUN_02132f7c(PTR_DAT_04cabe48);
    FUN_02132f7c(PTR_DAT_04cb9770);
    FUN_02132f7c(PTR_DAT_04cad940);
    FUN_02132f7c(PTR_DAT_04cabe50);
    FUN_02132f7c(PTR_DAT_04cb93c8);
                    /* try { // try from 02470d4c to 02570d5b has its CatchHandler @ 02470d60 */
    FUN_02132f7c(PTR_DAT_04cad460);
    bRam0000000004f9c7d3 = 1;
  }
                    /* try { // try from 02470d5c to 02570d63 has its CatchHandler @ 02470a5c */
                    /* catch() { ... } // from try @ 02470c78 with catch @ 02470d60
                       catch() { ... } // from try @ 02470d4c with catch @ 02470d60 */
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                    /* try { // try from 02470d64 to 02570d67 has its CatchHandler @ 02470d70 */
                    /* try { // try from 02470d68 to 02570d73 has its CatchHandler @ 02470a5c */
  System_Collections_Generic_HashSet_object____ctor_37e5358(lVar5,*(undefined8 *)puVar1);
  puVar4 = PTR_DAT_04cbafc8;
  puVar3 = PTR_DAT_04cabe50;
  puVar2 = PTR_DAT_04cab7e0;
  puVar1 = PTR_DAT_04caa038;
                    /* catch() { ... } // from try @ 02470d64 with catch @ 02470d70 */
  if (lVar5 != 0) {
    System_Collections_Generic_HashSet_object___Add_37e654c
              (lVar5,*(undefined8 *)PTR_DAT_04cabe48,*(undefined8 *)PTR_DAT_04cab7e0);
    System_Collections_Generic_HashSet_object___Add_37e654c
              (lVar5,*(undefined8 *)puVar3,*(undefined8 *)puVar2);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    *plVar6 = lVar5;
    thunk_FUN_02134474(plVar6,lVar5);
    lVar5 = FUN_02133068(*(undefined8 *)puVar1,5);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) != 0) {
        *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)PTR_DAT_04caf588;
        thunk_FUN_02134474((undefined8 *)(lVar5 + 0x20));
        if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)PTR_DAT_04cad4d0;
          thunk_FUN_02134474((undefined8 *)(lVar5 + 0x28));
          if (2 < *(uint *)(lVar5 + 0x18)) {
            *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)PTR_DAT_04cad460;
            thunk_FUN_02134474((undefined8 *)(lVar5 + 0x30));
            if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) != 0) {
              *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)PTR_DAT_04cb9770;
              thunk_FUN_02134474((undefined8 *)(lVar5 + 0x38));
              puVar3 = PTR_DAT_04cbb030;
              puVar2 = PTR_DAT_04cbb028;
              puVar1 = PTR_DAT_04cb9760;
              if (4 < *(uint *)(lVar5 + 0x18)) {
                *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)PTR_DAT_04cad940;
                thunk_FUN_02134474();
                plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
                *plVar6 = lVar5;
                thunk_FUN_02134474(plVar6,lVar5);
                uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                System_Collections_Generic_Dictionary_int__float____ctor_343d524
                          (uVar7,*(undefined8 *)puVar3);
                puVar8 = (undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
                *puVar8 = uVar7;
                thunk_FUN_02134474(puVar8,uVar7);
                uVar7 = *(undefined8 *)puVar1;
                if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                plVar6 = (long *)System_Type__GetTypeFromHandle_483f0b4(uVar7,0);
                if (plVar6 != (long *)0x0) {
                  uVar7 = (**(code **)(*plVar6 + 0x6d8))
                                    (plVar6,*(undefined8 *)PTR_DAT_04cb93c8,0x24,
                                     *(undefined8 *)(*plVar6 + 0x6e0));
                  puVar8 = (undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20);
                  *puVar8 = uVar7;
                  if (iRam00000000051c1b10 != 0) {
                    FUN_02220bf0(1L << ((ulong)puVar8 >> 0xc & 0x3f),
                                 ((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
                  }
                  return;
                }
                goto LAB_02470f6c;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
  }
LAB_02470f6c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

