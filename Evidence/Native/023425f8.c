/* IL2CPP: Dino.BusSand.App.Meta.LiveOps$$BuildHallQueue
Dino_BusSand_App_Meta_HallQueue_o* Dino_BusSand_App_Meta_LiveOps__BuildHallQueue (bool fromGame, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.LiveOps$$BuildHallQueue
   Dino_BusSand_App_Meta_HallQueue_o* Dino_BusSand_App_Meta_LiveOps__BuildHallQueue (bool fromGame,
   const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_LiveOps__BuildHallQueue_22425f8(byte param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar1 = PTR_DAT_04cb38b0;
  if ((bRam0000000004f9bf0f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3848);
    FUN_02132f7c(PTR_DAT_04cb38b8);
    FUN_02132f7c(PTR_DAT_04cac668);
    FUN_02132f7c(PTR_DAT_04cb38c0);
    FUN_02132f7c(PTR_DAT_04cb38b0);
    bRam0000000004f9bf0f = 1;
  }
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar4,0);
  puVar3 = PTR_DAT_04cb38c0;
  puVar2 = PTR_DAT_04cb3848;
  puVar1 = PTR_DAT_04cac668;
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)PTR_DAT_04cb38b8;
    *(byte *)(lVar4 + 0x18) = param_1 & 1;
    uVar5 = thunk_FUN_0216e89c(uVar5);
    Dino_BusSand_App_Meta_HallQueue___ctor_2240824(uVar5,0);
    puVar6 = (undefined8 *)(lVar4 + 0x10);
    *puVar6 = uVar5;
    thunk_FUN_02134474(puVar6,uVar5);
    uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    System_Action_object____ctor_35f0008(uVar5,lVar4,*(undefined8 *)puVar3,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_LiveOps__Each_22416f0(uVar5);
    return *puVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

