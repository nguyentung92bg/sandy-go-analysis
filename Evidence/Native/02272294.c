/* IL2CPP: Dino.BusSand.App.GameApp.<RunHallQueue>d__119$$MoveNext
bool Dino_BusSand_App_GameApp__RunHallQueue_d__119__MoveNext (Dino_BusSand_App_GameApp__RunHallQueue_d__119_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.GameApp.<RunHallQueue>d__119$$MoveNext
   bool Dino_BusSand_App_GameApp__RunHallQueue_d__119__MoveNext
   (Dino_BusSand_App_GameApp__RunHallQueue_d__119_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_GameApp__RunHallQueue_d__119__MoveNext_2172294(long param_1)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 *puVar8;
  
  if ((bRam0000000004f9b8ac & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac668);
    FUN_02132f7c(PTR_DAT_04caca88);
    bRam0000000004f9b8ac = 1;
  }
  puVar2 = PTR_DAT_04cac668;
  iVar3 = *(int *)(param_1 + 0x10);
  lVar7 = *(long *)(param_1 + 0x28);
  if (iVar3 - 1U < 2) {
    cVar1 = *(char *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* catch() { ... } // from try @ 02272228 with catch @ 02272368 */
                    /* catch() { ... } // from try @ 02272204 with catch @ 0227236c */
    lVar5 = Dino_BusSand_App_Meta_LiveOps__BuildHallQueue_22425f8(cVar1 != '\0',0);
                    /* catch() { ... } // from try @ 022721ec with catch @ 02272370 */
    if (lVar5 == 0) goto LAB_022723f8;
                    /* catch() { ... } // from try @ 022721d0 with catch @ 02272374 */
                    /* catch() { ... } // from try @ 022721a8 with catch @ 02272378 */
                    /* catch() { ... } // from try @ 02272180 with catch @ 0227237c */
    iVar3 = Dino_BusSand_App_Meta_HallQueue__get_Count_2240760(lVar5,0);
                    /* catch() { ... } // from try @ 02272158 with catch @ 02272380 */
                    /* catch() { ... } // from try @ 02272130 with catch @ 02272384 */
    if (0 < iVar3) {
                    /* catch() { ... } // from try @ 02272108 with catch @ 02272388 */
                    /* catch() { ... } // from try @ 022720e0 with catch @ 0227238c */
      uVar4 = Dino_BusSand_App_Meta_HallQueue__RunAll_22407b0(lVar5,0);
      *(undefined8 *)(param_1 + 0x18) = uVar4;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar4);
                    /* try { // try from 022723a4 to 023723c7 has its CatchHandler @ 022723a4
                       catch() { ... } // from try @ 022723a4 with catch @ 022723a4
                       catch() { ... } // from try @ 022723d0 with catch @ 022723a4 */
      uVar6 = 3;
      goto LAB_022723e4;
    }
  }
  else {
    if (iVar3 != 3) {
      if (iVar3 != 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (*(char *)(param_1 + 0x20) != '\0') {
        uVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
        UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(_UNK_00e1fea4,uVar4,0);
        *(undefined8 *)(param_1 + 0x18) = uVar4;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar4);
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
                    /* try { // try from 022723d0 to 023723fb has its CatchHandler @ 022723a4 */
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
                    /* catch() { ... } // from try @ 022723c8 with catch @ 022723e0 */
      uVar6 = 2;
LAB_022723e4:
      *(undefined4 *)(param_1 + 0x10) = uVar6;
      return 1;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  if (lVar7 != 0) {
    puVar8 = (undefined8 *)(lVar7 + 0x80);
    *puVar8 = 0;
    thunk_FUN_02134474(puVar8,0);
    return 0;
                    /* try { // try from 022723c8 to 023723cf has its CatchHandler @ 022723e0 */
  }
LAB_022723f8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

