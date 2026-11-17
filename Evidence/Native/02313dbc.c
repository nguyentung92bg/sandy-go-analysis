/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$IapTimeStop
void Dino_BusSand_App_Meta_GameTracking__IapTimeStop (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$IapTimeStop
   void Dino_BusSand_App_Meta_GameTracking__IapTimeStop (const MethodInfo* method); */

void Dino_BusSand_App_Meta_GameTracking__IapTimeStop_2213dbc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = PTR_DAT_04cac498;
  if ((bRam0000000004f9bd4c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2360);
    FUN_02132f7c(PTR_DAT_04cb2368);
    FUN_02132f7c(PTR_DAT_04cb2370);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cb2378);
    bRam0000000004f9bd4c = 1;
  }
  lVar3 = *(long *)puVar1;
  uStack_48 = 0;
  uStack_40 = 0;
                    /* try { // try from 02313e2c to 02413e33 has its CatchHandler @ 02313e84 */
  lStack_38 = 0;
                    /* try { // try from 02313e34 to 02413e53 has its CatchHandler @ 02313e80 */
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  lVar5 = *(long *)(lVar3 + 0xb8);
  if (0.0 <= *(float *)(lVar5 + 0x3c)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02313d20 with catch @ 02313e54
                       try { // try from 02313e54 to 02413eab has its CatchHandler @ 023139ac */
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)(*(long *)puVar1 + 0xb8);
    }
    if (*(long *)(lVar5 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02313d60 with catch @ 02313e6c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02313e34 with catch @ 02313e80
                        */
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_48,*(long *)(lVar5 + 0x68),*(undefined8 *)PTR_DAT_04cb2378);
    puVar2 = PTR_DAT_04cb2368;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02313e2c with catch @ 02313e84
                        */
    do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02313c64 with catch @ 02313e98
                        */
      uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_48,*(undefined8 *)puVar2);
      if ((uVar4 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_48,*(undefined8 *)PTR_DAT_04cb2360);
        lVar3 = *(long *)puVar1;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar3 = *(long *)puVar1;
        }
        fVar8 = *(float *)(*(long *)(lVar3 + 0xb8) + 0x30);
        fVar6 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
        lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
        fVar7 = *(float *)(lVar3 + 0x3c);
        *(undefined4 *)(lVar3 + 0x3c) = 0xbf800000;
        *(float *)(lVar3 + 0x30) = fVar8 + (fVar6 - fVar7);
        return;
      }
      if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    } while (*(char *)(lStack_38 + 0x40) == '\0');
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_48,*(undefined8 *)PTR_DAT_04cb2360);
  }
  return;
}

