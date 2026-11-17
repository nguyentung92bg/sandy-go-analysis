/* IL2CPP: Dino.BusSand.App.Meta.Profile$$DeleteSave
void Dino_BusSand_App_Meta_Profile__DeleteSave (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Profile$$DeleteSave
   void Dino_BusSand_App_Meta_Profile__DeleteSave (const MethodInfo* method); */

void Dino_BusSand_App_Meta_Profile__DeleteSave_2271234(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar2 = PTR_DAT_04cabaf8;
  puVar1 = PTR_DAT_04caa038;
  if ((bRam0000000004f9c0ec & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac668);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cabb68);
    FUN_02132f7c(PTR_DAT_04cb4730);
    bRam0000000004f9c0ec = 1;
  }
  lVar3 = FUN_02133068(*(undefined8 *)puVar1,3);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar4 = Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0();
  puVar1 = PTR_DAT_04cabb68;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(lVar3 + 0x18) != 0) {
    *(undefined8 *)(lVar3 + 0x20) = uVar4;
    thunk_FUN_02134474((undefined8 *)(lVar3 + 0x20),uVar4);
    uVar4 = Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0();
    uVar4 = System_String__Concat_46c82e0(uVar4,*(undefined8 *)puVar1,0);
    puVar1 = PTR_DAT_04cb4730;
    if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar3 + 0x28) = uVar4;
      thunk_FUN_02134474((undefined8 *)(lVar3 + 0x28),uVar4);
      uVar4 = Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0();
      uVar4 = System_String__Concat_46c82e0(uVar4,*(undefined8 *)puVar1,0);
      if (2 < *(uint *)(lVar3 + 0x18)) {
        *(undefined8 *)(lVar3 + 0x30) = uVar4;
        thunk_FUN_02134474((undefined8 *)(lVar3 + 0x30),uVar4);
        if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
          uVar7 = 0;
          uVar6 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
          do {
            if (uVar6 <= uVar7) goto LAB_02371488;
            uVar4 = *(undefined8 *)(lVar3 + 0x20 + uVar7 * 8);
            uVar6 = System_IO_File__Exists_47f230c(uVar4,0);
            if ((uVar6 & 1) != 0) {
              System_IO_File__Delete_47f8b84(uVar4,0);
            }
            uVar6 = (ulong)*(uint *)(lVar3 + 0x18);
            uVar7 = uVar7 + 1;
          } while ((long)uVar7 < (long)(int)*(uint *)(lVar3 + 0x18));
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar4 = Dino_BusSand_App_Meta_Profile__get_SealedKey_22711c0();
        UnityEngine_PlayerPrefs__DeleteKey_43b5c98(uVar4,0);
        if (cRam0000000004f9c128 == '\0') {
          FUN_02132f7c(PTR_DAT_04cabaf8);
          cRam0000000004f9c128 = '\x01';
        }
        puVar1 = PTR_DAT_04cac668;
        lVar3 = *(long *)puVar2;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar3 = *(long *)puVar2;
        }
        puVar5 = (undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10);
        *puVar5 = 0;
        thunk_FUN_02134474(puVar5,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Meta_LiveOps__ReloadAll_2241548(0);
        puVar1 = PTR_DAT_04cb5400;
        if ((bRam0000000004f9c1ed & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cb5400);
          bRam0000000004f9c1ed = 1;
        }
        puVar5 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
        *puVar5 = 0;
        thunk_FUN_02134474(puVar5,0);
        **(undefined8 **)(*(long *)puVar1 + 0xb8) = 0;
        if (iRam00000000051c1b10 != 0) {
          FUN_02220bf0(1L << (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0xc & 0x3f),
                       (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
        }
        return;
      }
    }
  }
LAB_02371488:
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

