/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$ReadHotkeys
void Dino_BusSand_Cheat_CheatManager__ReadHotkeys (Dino_BusSand_Cheat_CheatManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$ReadHotkeys
   void Dino_BusSand_Cheat_CheatManager__ReadHotkeys (Dino_BusSand_Cheat_CheatManager_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatManager__ReadHotkeys_23667ac(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if ((bRam0000000004f9c75d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba3b0);
    FUN_02132f7c(PTR_DAT_04cba3b8);
    FUN_02132f7c(PTR_DAT_04cba3c0);
                    /* try { // try from 024667fc to 0256682b has its CatchHandler @ 0246657c */
    FUN_02132f7c(PTR_DAT_04cba3f0);
    bRam0000000004f9c75d = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  lStack_48 = 0;
  uVar5 = UnityEngine_Input__get_anyKeyDown_443032c(0);
  if ((uVar5 & 1) != 0) {
    uVar5 = UnityEngine_Input__GetKey_4430250(0x132,0);
    if ((uVar5 & 1) == 0) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02466774 with catch @ 02466834
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02466780 with catch @ 02466838
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02466754 with catch @ 0246683c
                        */
      bVar2 = UnityEngine_Input__GetKey_4430250(0x131,0);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02466760 with catch @ 02466840
                        */
    }
    else {
                    /* try { // try from 0246682c to 0256682f has its CatchHandler @ 02466850 */
      bVar2 = 1;
                    /* try { // try from 02466830 to 02566873 has its CatchHandler @ 0246657c */
    }
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02466798 with catch @ 02466844
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02466730 with catch @ 02466848
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0246673c with catch @ 0246684c
                        */
    uVar5 = UnityEngine_Input__GetKey_4430250(0x130,0);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0246682c with catch @ 02466850
                        */
    if ((uVar5 & 1) == 0) {
      bVar3 = UnityEngine_Input__GetKey_4430250(0x12f,0);
    }
    else {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02466710 with catch @ 02466854
                        */
      bVar3 = 1;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02466700 with catch @ 02466858
                        */
    }
                    /* try { // try from 02466874 to 02566877 has its CatchHandler @ 02466890 */
    uVar5 = UnityEngine_Input__GetKey_4430250(0x134,0);
                    /* try { // try from 02466878 to 02566893 has its CatchHandler @ 0246657c */
    if ((uVar5 & 1) == 0) {
      bVar4 = UnityEngine_Input__GetKey_4430250(0x133,0);
                    /* catch() { ... } // from try @ 02466874 with catch @ 02466890 */
    }
    else {
      bVar4 = 1;
    }
                    /* try { // try from 02466894 to 0256689b has its CatchHandler @ 024668a4 */
                    /* try { // try from 0246689c to 025668a7 has its CatchHandler @ 0246657c */
    if ((*(long *)(param_1 + 0x100) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_1 + 0x100) + 0x58), lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02466894 with catch @ 024668a4
                        */
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_58,lVar6,*(undefined8 *)PTR_DAT_04cba3f0);
    puVar1 = PTR_DAT_04cba3b8;
    do {
      uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_58,*(undefined8 *)puVar1);
      lVar6 = lStack_48;
      if ((uVar5 & 1) == 0) goto LAB_02466934;
      if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    } while ((((*(char *)(lStack_48 + 0x2c) == '\0') ||
              (uVar5 = UnityEngine_Input__GetKeyDown_44302c8(*(undefined4 *)(lStack_48 + 0x28),0),
              (uVar5 & 1) == 0)) || (*(byte *)(lVar6 + 0x20) != (bVar2 & 1))) ||
            ((*(byte *)(lVar6 + 0x21) != (bVar3 & 1) || (*(byte *)(lVar6 + 0x22) != (bVar4 & 1)))));
    Dino_BusSand_Cheat_CheatManager__Run_2362fe4(param_1,*(undefined4 *)(lVar6 + 0x24));
LAB_02466934:
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_58,*(undefined8 *)PTR_DAT_04cba3b0);
  }
  return;
}

