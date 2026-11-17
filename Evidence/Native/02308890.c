/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings$$Clamp
int64_t Dino_BusSand_App_Meta_EconomySettings__Clamp (Dino_BusSand_App_Meta_EconomySettings_Parsed_o* p, System_String_o* label, int64_t v, int64_t min, int64_t max, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings$$Clamp
   int64_t Dino_BusSand_App_Meta_EconomySettings__Clamp
   (Dino_BusSand_App_Meta_EconomySettings_Parsed_o* p, System_String_o* label, int64_t v, int64_t
   min, int64_t max, const MethodInfo* method); */

long Dino_BusSand_App_Meta_EconomySettings__Clamp_2208890
               (long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lStack_48;
  long lStack_38;
  
  lStack_38 = param_3;
  if ((bRam0000000004f9bce4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab718);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cab270);
    FUN_02132f7c(PTR_DAT_04cb1fb0);
    bRam0000000004f9bce4 = 1;
  }
  if ((param_4 <= param_3) && (param_3 <= param_5)) {
    return param_3;
  }
  lStack_48 = param_4;
  if (param_4 <= param_3) {
    lStack_48 = param_5;
  }
  if (param_1 != 0) {
    lVar5 = *(long *)(param_1 + 0x40);
    lVar2 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,5);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) != 0) {
        *(undefined8 *)(lVar2 + 0x20) = param_2;
        thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_2);
        if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)PTR_DAT_04cab270;
          thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28));
          uVar3 = System_Int64__ToString_482e7e4(&lStack_38,0);
          if (2 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x30) = uVar3;
            thunk_FUN_02134474((undefined8 *)(lVar2 + 0x30),uVar3);
            if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) != 0) {
              *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)PTR_DAT_04cb1fb0;
              thunk_FUN_02134474((undefined8 *)(lVar2 + 0x38));
              uVar3 = System_Int64__ToString_482e7e4(&lStack_48,0);
              if (4 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x40) = uVar3;
                thunk_FUN_02134474();
                uVar3 = System_String__Concat_46d31f0(lVar2,0);
                if (lVar5 != 0) {
                  lVar2 = *(long *)(lVar5 + 0x10);
                  lVar4 = *(long *)PTR_DAT_04cab718;
                  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  if (lVar2 != 0) {
                    uVar1 = *(uint *)(lVar5 + 0x18);
                    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                      *(undefined8 *)(lVar2 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
                      thunk_FUN_02134474();
                      return lStack_48;
                    }
                    System_Collections_Generic_List_object___AddWithResize_3a81bf4
                              (lVar5,uVar3,
                               *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                    return lStack_48;
                  }
                }
                goto LAB_02308a94;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
  }
LAB_02308a94:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

