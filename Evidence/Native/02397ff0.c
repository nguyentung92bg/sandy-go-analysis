/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyReplay$$Outcome
int32_t Dino_BusSand_App_Meta_Journey_JourneyReplay__Outcome (System_Collections_Generic_List_SimEvent__o* evts, int32_t* waitReason, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyReplay$$Outcome
   int32_t Dino_BusSand_App_Meta_Journey_JourneyReplay__Outcome
   (System_Collections_Generic_List_SimEvent__o* evts, int32_t* waitReason, const MethodInfo*
   method); */

undefined4
Dino_BusSand_App_Meta_Journey_JourneyReplay__Outcome_2297ff0(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000004f9c20e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5648);
    FUN_02132f7c(PTR_DAT_04cb5650);
    FUN_02132f7c(PTR_DAT_04cb5658);
    FUN_02132f7c(PTR_DAT_04cb5660);
    bRam0000000004f9c20e = 1;
  }
  uStack_40 = 0;
  *param_2 = 0;
  puVar2 = PTR_DAT_04cb5660;
  puVar1 = PTR_DAT_04cb5650;
  puStack_58 = (undefined8 *)0x0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (param_1 == 0) {
    return 0xffffffff;
  }
  System_Collections_Generic_List_SimEvent___GetEnumerator_3ac0844
            (&uStack_88,param_1,*(undefined8 *)PTR_DAT_04cb5660);
  uStack_40 = uStack_68;
  puStack_58 = puStack_80;
  uStack_60 = uStack_88;
  uStack_48 = uStack_70;
  uStack_50 = uStack_78;
  uStack_88 = 0;
  puStack_80 = &uStack_60;
  do {
    uVar3 = System_Collections_Generic_List_Enumerator_SimEvent___MoveNext_35e048c
                      (&uStack_60,*(undefined8 *)puVar1);
    if ((uVar3 & 1) == 0) {
      System_Collections_Generic_List_Enumerator_SimEvent___Dispose_35e0488
                (&uStack_60,*(undefined8 *)PTR_DAT_04cb5648);
      System_Collections_Generic_List_SimEvent___GetEnumerator_3ac0844
                (&uStack_88,param_1,*(undefined8 *)puVar2);
      uStack_40 = uStack_68;
      puStack_58 = puStack_80;
      uStack_60 = uStack_88;
      uStack_48 = uStack_70;
      uStack_50 = uStack_78;
      uStack_88 = 0;
      puStack_80 = &uStack_60;
      do {
        uVar3 = System_Collections_Generic_List_Enumerator_SimEvent___MoveNext_35e048c
                          (&uStack_60,*(undefined8 *)puVar1);
        if ((uVar3 & 1) == 0) {
                    /* try { // try from 02398178 to 0249817f has its CatchHandler @ 0239822c */
                    /* try { // try from 02398184 to 0249819f has its CatchHandler @ 02398224 */
          System_Collections_Generic_List_Enumerator_SimEvent___Dispose_35e0488
                    (&uStack_60,*(undefined8 *)PTR_DAT_04cb5648);
          return 0xffffffff;
        }
      } while (((int)uStack_50 != 2) && ((int)uStack_50 != 0x1f));
      System_Collections_Generic_List_Enumerator_SimEvent___Dispose_35e0488
                (&uStack_60,*(undefined8 *)PTR_DAT_04cb5648);
      return 0;
    }
    if ((int)uStack_50 == 0) {
                    /* try { // try from 02398154 to 0249815b has its CatchHandler @ 02398238 */
      uVar4 = 1;
      goto LAB_02398160;
    }
    if ((int)uStack_50 == 1) {
      uVar4 = 3;
      goto LAB_02398160;
    }
  } while ((int)uStack_50 != 0x20);
  uVar4 = 2;
  *param_2 = (undefined4)uStack_48;
LAB_02398160:
                    /* try { // try from 02398168 to 02498173 has its CatchHandler @ 02398228 */
  System_Collections_Generic_List_Enumerator_SimEvent___Dispose_35e0488
            (&uStack_60,*(undefined8 *)PTR_DAT_04cb5648);
  return uVar4;
}

