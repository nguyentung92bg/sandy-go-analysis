/* IL2CPP: Dino.BusSand.Sdk.UnityIapProvider$$Complete
void Dino_BusSand_Sdk_UnityIapProvider__Complete (Dino_BusSand_Sdk_UnityIapProvider_o* __this, System_String_o* pid, bool ok, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.UnityIapProvider$$Complete
   void Dino_BusSand_Sdk_UnityIapProvider__Complete (Dino_BusSand_Sdk_UnityIapProvider_o* __this,
   System_String_o* pid, bool ok, const MethodInfo* method); */

void Dino_BusSand_Sdk_UnityIapProvider__Complete_243e214
               (long param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  long lStack_28;
  
  if ((bRam0000000004f9cc8c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf680);
    FUN_02132f7c(PTR_DAT_04cbf688);
    FUN_02132f7c(PTR_DAT_04cbf690);
    bRam0000000004f9cc8c = 1;
  }
  lStack_28 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    System_Collections_Generic_Dictionary_object__float___Remove_34b9004
              (*(long *)(param_1 + 0x28),param_2,*(undefined8 *)PTR_DAT_04cbf680);
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                        (*(long *)(param_1 + 0x20),param_2,&lStack_28,
                         *(undefined8 *)PTR_DAT_04cbf690);
      if ((uVar1 & 1) != 0) {
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_0253e2f0;
        System_Collections_Generic_Dictionary_object__object___Remove_34b58c0
                  (*(long *)(param_1 + 0x20),param_2,*(undefined8 *)PTR_DAT_04cbf688);
        if (lStack_28 != 0) {
          (**(code **)(lStack_28 + 0x18))
                    (*(undefined8 *)(lStack_28 + 0x40),param_3 & 1,*(undefined8 *)(lStack_28 + 0x28)
                    );
        }
      }
      return;
    }
  }
LAB_0253e2f0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

