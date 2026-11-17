/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyBytes$$Room
bool Dino_BusSand_App_Meta_Journey_JourneyBytes__Room (Dino_BusSand_App_Meta_Journey_JourneyBytes_o* __this, int32_t n, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyBytes$$Room
   bool Dino_BusSand_App_Meta_Journey_JourneyBytes__Room
   (Dino_BusSand_App_Meta_Journey_JourneyBytes_o* __this, int32_t n, const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_Journey_JourneyBytes__Room_22954ac(long param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  
  if ((bRam0000000004f9c1fd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caaad0);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9c1fd = 1;
  }
  puVar1 = PTR_DAT_04caa200;
  if (*(char *)(param_1 + 0x24) == '\0') {
    iVar6 = *(int *)(param_1 + 0x18);
    uVar4 = *(undefined4 *)(param_1 + 0x1c);
    uVar3 = *(undefined4 *)(param_1 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar2 = System_Math__Min_4831118(uVar3,uVar4,0);
    if (iVar2 < iVar6 + param_2) {
      uVar5 = 0;
      *(undefined1 *)(param_1 + 0x24) = 1;
    }
    else {
      lVar7 = *(long *)(param_1 + 0x10);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      iVar6 = *(int *)(lVar7 + 0x18);
      param_2 = *(int *)(param_1 + 0x18) + param_2;
      if (iVar6 < param_2) {
        uVar4 = *(undefined4 *)(param_1 + 0x1c);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          iVar6 = *(int *)(lVar7 + 0x18);
        }
        uVar3 = System_Math__Max_4830fc8(param_2,iVar6 << 1,0);
        uVar4 = System_Math__Min_4831118(uVar4,uVar3,0);
        uVar5 = FUN_02133068(*(undefined8 *)PTR_DAT_04caaad0,uVar4);
        System_Buffer__BlockCopy_485a108
                  (*(undefined8 *)(param_1 + 0x10),0,uVar5,0,*(undefined4 *)(param_1 + 0x18),0);
        *(undefined8 *)(param_1 + 0x10) = uVar5;
        thunk_FUN_02134474((long *)(param_1 + 0x10),uVar5);
      }
      uVar5 = 1;
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

