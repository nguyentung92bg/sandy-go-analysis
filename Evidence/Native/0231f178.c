/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$.ctor
void Dino_BusSand_App_Meta_BattleRoyaleCore___ctor (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, Dino_BusSand_App_Meta_BattleRoyaleData_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$.ctor
   void Dino_BusSand_App_Meta_BattleRoyaleCore___ctor (Dino_BusSand_App_Meta_BattleRoyaleCore_o*
   __this, Dino_BusSand_App_Meta_BattleRoyaleData_o* data, const MethodInfo* method); */

void Dino_BusSand_App_Meta_BattleRoyaleCore___ctor_221f178(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_04cb2970;
  puVar1 = PTR_DAT_04cae330;
  if ((bRam0000000004f9bdbb & 1) == 0) {
                    /* try { // try from 0231f1ac to 0241f1b7 has its CatchHandler @ 0231f1cc */
    FUN_02132f7c(PTR_DAT_04cb2978);
    FUN_02132f7c(PTR_DAT_04cb2980);
    FUN_02132f7c(PTR_DAT_04cae330);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0231f1ac with catch @ 0231f1cc
                        */
    FUN_02132f7c(PTR_DAT_04cb2988);
    FUN_02132f7c(PTR_DAT_04cb2970);
    bRam0000000004f9bdbb = 1;
  }
  uVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Random___ctor_4840a9c(uVar3,0);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar3);
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  puVar6 = *(undefined8 **)(lVar4 + 0xb8);
  lVar7 = puVar6[1];
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar3 = *puVar6;
    lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb2980);
    System_Func_long____ctor_379dcdc(lVar7,uVar3,*(undefined8 *)PTR_DAT_04cb2988,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar5 = lVar7;
    thunk_FUN_02134474(plVar5,lVar7);
  }
  *(long *)(param_1 + 0x20) = lVar7;
  thunk_FUN_02134474((long *)(param_1 + 0x20),lVar7);
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  System_Object___ctor_4870e5c(param_1,0);
  if (param_2 == 0) {
    param_2 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb2978);
    Dino_BusSand_App_Meta_BattleRoyaleData___ctor_221f2f4();
  }
  plVar5 = (long *)(param_1 + 0x10);
  *plVar5 = param_2;
  thunk_FUN_02134474(plVar5,param_2);
  lVar4 = *plVar5;
  if (lVar4 != 0) {
    if ((bRam0000000004f9bdd1 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cad6e8);
      FUN_02132f7c(PTR_DAT_04cae328);
      FUN_02132f7c(PTR_DAT_04caa1c8);
      FUN_02132f7c(PTR_DAT_04cae320);
      bRam0000000004f9bdd1 = 1;
    }
    plVar5 = (long *)(lVar4 + 0x68);
    if (*plVar5 == 0) {
      lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1c8);
      System_Collections_Generic_List_int____ctor_3a2b7dc(lVar7,*(undefined8 *)PTR_DAT_04cad6e8);
      *plVar5 = lVar7;
      thunk_FUN_02134474(plVar5,lVar7);
    }
    plVar5 = (long *)(lVar4 + 0x88);
    if (*plVar5 == 0) {
      lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cae320);
      System_Collections_Generic_List_object____ctor_3a8138c(lVar7,*(undefined8 *)PTR_DAT_04cae328);
      *plVar5 = lVar7;
      thunk_FUN_02134474(plVar5,lVar7);
    }
    plVar5 = (long *)(lVar4 + 0x90);
    if (*plVar5 == 0) {
      lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1c8);
      System_Collections_Generic_List_int____ctor_3a2b7dc(lVar7,*(undefined8 *)PTR_DAT_04cad6e8);
      *plVar5 = lVar7;
      thunk_FUN_02134474(plVar5,lVar7);
    }
    plVar5 = (long *)(lVar4 + 0xa0);
    if (*plVar5 != 0) {
      return;
    }
    lVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1c8);
    System_Collections_Generic_List_int____ctor_3a2b7dc(lVar4,*(undefined8 *)PTR_DAT_04cad6e8);
    *plVar5 = lVar4;
    if (iRam00000000051c1b10 != 0) {
      FUN_02220bf0(1L << ((ulong)plVar5 >> 0xc & 0x3f),
                   ((ulong)plVar5 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

